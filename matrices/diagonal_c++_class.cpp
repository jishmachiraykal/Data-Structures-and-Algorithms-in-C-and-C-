#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

class diagonal{
private:
    int *A;
    int n;

public:
    diagonal(){ // constructor: non-parameterized
        n=2;
        A=new int[n];
    }

    diagonal(int n){ // constructor: parameterized
        this->n=n;
        A=new int[n];
    }

    ~diagonal(){ //destructor
      delete []A;
    }

    void set(int i,int j, int x); //since it is directly inside same class, it won't take array
    int get(int i,int j);
    void display_matrix();
};

void diagonal::set(int i,int j, int x){ // x is the element we want to set
    if(i==j){
        A[i]=x; // setting the element
    }
}

int diagonal::get(int i,int j){ // x is the element we want to set
    if(i==j){
        return A[i]; // setting the element
    }else{
        return 0; //returning zero because in diagonal matrix other elements will be zero
    }
}

void diagonal::display_matrix(){
    int i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==j){
                cout<<A[i]<<" ";
            }else{
                cout<<"0 ";
            }
        }
        cout<<endl;
    }
}

int main() {
    diagonal d(4);

    d.set(1,1,1);d.set(2,2,5);d.set(3,3,10);d.set(4,4,15);
    d.display_matrix();
    cout<<"Value at (4,4) is "<<d.get(4,4);

    return 0;
}