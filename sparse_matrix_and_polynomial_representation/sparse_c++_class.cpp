#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

class element{
public:
    int i;
    int j;
    int x;
};

class sparse{
private:
    int m;
    int n;
    int no; // no.of non-zero elements
    element *e;

public:
    sparse(int m,int n,int no){
        this->m=m;
        this->n=n;
        this->no=no;
        e=new element[this->no];
    }

    ~sparse(){
        delete []e;
    }

    sparse operator+ (sparse &s);
    friend istream & operator>>(istream &is, sparse &s); //signature for extraction operator i., istream operator. Only class name has to be changed. This is for read function
    friend ostream & operator<<(ostream &os, sparse &s); //insertion operator. This is for display function
};

istream & operator>>(istream &is, sparse &s){ // a separate function to read all the elements
        cout<<"Enter all non-zero elements";
        for(int i=0;i<s.no;i++){
            cin>>s.e[i].i>>s.e[i].j>>s.e[i].x;
            }
            return is;
    }

ostream & operator<<(ostream &os, sparse &s){
    int j,k = 0; // Index for non-zero elements
    for(int i = 0; i < s.m; i++) { // Iterate over rows
    if(s.e[k].i == i && s.e[k].j == j) {
                // Print the non-zero element and increment k
                cout << s.e[k++].x << " ";
            } else {
                // Print 0 if no non-zero element found at (i, j)
                cout << "0 ";
            }
        }
        cout << endl;
        return os;
    }

sparse sparse::operator+ (sparse &s){
        int i,j,k=0;
        i=j=k=0;

        if(m!=s.m || n!=s.n){
            throw "Matrices have different dimensions and cannot be added!";
        }
        struct sparse *sum= new sparse(m,n,no+s.no); // create sparse matrix

        while(i<no && j<s.no){
            if(e[i].i<s.e[j].i){
                sum->e[k++]=e[i++];
            }else if(e[i].i>s.e[j].i){
                sum->e[k++]=s.e[j++];   
            }else{
                if(e[i].j<s.e[j].j){
                    sum->e[k++]=e[i++];
                }else if(e[i].j>s.e[j].j){
                    sum->e[k++]=s.e[j++];
                    }else{
                    sum->e[k]=e[i];
                    sum->e[k++].x=e[i++].x+s.e[j++].x;
                }
            }
        }
        for(;i<no;i++) sum->e[k++]=e[i];
        for(;j<s.no;j++) sum->e[k++]=s.e[j];
        sum->no=k; // no.of non-zero elements will be listed in k. Hence assigning it to no

        return *sum;
}

int main() {
    sparse s1(3,3,3);sparse s2(3,3,3);

    cin>>s1;
    cin>>s2;
    sparse s3=s1+s2;

    cout<<"First matrix "<<endl<<s1;
    cout<<"Second matrix "<<endl<<s2;
    cout<<"Sum matrix is "<<endl<<s3;

    return 0;
}