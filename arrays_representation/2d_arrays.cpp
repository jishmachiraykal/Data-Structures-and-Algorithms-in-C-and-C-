#include <stdio.h>
#include <stdlib.h>
#include <iostream>

int main ()
{

    int A[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}}; //array will be created inside stack
    int *B[3]; //array will be created inside stack

    B[0]=new int[4]; //array will be created inside heap
    B[1]=new int[4]; //array will be created inside heap
    B[2]=new int[4]; //array will be created inside heap
    B[3]=new int[4]; //array will be created inside heap

    int **C;
    C=new int *[3]; //array will be created inside heap
    C[0]= new int[4]; //array will be created inside heap
    C[1]= new int[4]; //array will be created inside heap
    C[2]= new int[4]; //array will be created inside heap

     for(int i=0; i<3;i++){
        for(int j=0;j<4;j++){
            printf("%d ", A[i][j]);
        }  
        printf("\n");
    }

    printf("-----------\n");

    for(int i=0; i<3;i++){
        for(int j=0;j<4;j++){
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    printf("-----------\n");

    for(int i=0; i<3;i++){
        for(int j=0;j<4;j++){
            printf("%d ", C[i][j]);
        }   
        printf("\n");
    }
}