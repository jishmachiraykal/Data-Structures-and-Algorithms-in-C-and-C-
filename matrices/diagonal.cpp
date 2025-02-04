#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

struct matrix{
    int A[10];
    int n;
};

void set(struct matrix *m, int i,int j, int x){ // x is the element we want to set
    if(i==j){
        m->A[i]=x; // setting the element
    }
}

int get(struct matrix m, int i,int j){ // x is the element we want to set
    if(i==j){
        return m.A[i]; // setting the element
    }else{
        return 0; //returning zero because in diagonal matrix other elements will be zero
    }
}

void display_matrix(struct matrix m){
    int i,j;
    for(i=1;i<=m.n;i++){
        for(j=1;j<=m.n;j++){
            if(i==j){
                printf("%d ", m.A[i]);
            }else{
                printf("0 ");
            }
        }
        printf("\n");
    }
}

int main() {
    struct matrix m;
    m.n=4; //setting the dimension of the matrix

    set(&m,1,1,1);set(&m,2,2,5);set(&m,3,3,10);set(&m,4,4,15);
    
    display_matrix(m);
    printf("Value at (3,3) is: %d \n", get(m,3,3));

    return 0;

}