//lower triangular matrix using row major mapping in C++:
#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

class lower_triangular{
private:
    int *A;
    int n;

public:
    lower_triangular(){ // constructor: non-parameterized
        n=2;
        A=new int[2*(2+1)/2];
    }

    lower_triangular(int n){ // constructor: parameterized
        this->n=n;
        A=new int[n*(n+1)/2];
    }

    ~lower_triangular(){ //destructor
        delete []A;
    }

    void set(int i,int j, int x); //since it is directly inside same class, it won't take array
    int get(int i,int j);
    void display_matrix();
    int get_dimension(){return n;}
};

void lower_triangular::set(int i,int j, int x){ // x is the element we want to set
    if(i>=j){
        A[i*(i-1)/2+(j-1)]=x; // setting the element
    }
}

int lower_triangular::get(int i,int j){ // x is the element we want to set
    if(i==j){
        return A[i*(i-1)/2+(j-1)]; // setting the element
    }else{
        return 0; //returning zero because in diagonal matrix other elements will be zero
    }
}

void lower_triangular::display_matrix(){
    int i,j;

    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i>=j){
                cout<<A[i*(i-1)/2+(j-1)]<<" ";
                }else{
                cout<<"0 ";
            }
        }
        cout<<endl;
    }
}

int main() {
    int d,x;

    cout<<"Enter dimension";
    cin>>d;

    lower_triangular lm(d);
    cout<<"Enter elements";
    for(int i=1;i<=d;i++){
        for(int j=1;j<=d;j++){
           cin>>x;
           lm.set(i,j,x);
        }
    }
    lm.display_matrix();

    return 0;
}