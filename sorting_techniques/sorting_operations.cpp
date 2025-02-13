#include <stdlib.h>
#include <iostream>
#include <stdio.h>

using namespace std;

void swap(int *x, int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}


void bubbleSort(int A[], int n){
    int i,j,flag,temp;
    
    for(i=0;i<n-1;i++){
        flag=0;
        for(j=0;j<n-i-1;j++){ // with each pass comparision should decrement, therefore n-i-1
            if(A[j]>A[j+1]){
               swap(&A[j],&A[j+1]);
               flag=1;
            }
        }
        if(flag==0){ // this shows no swapping done and list is already sorted
            break;
        }
    }
}

void insertionSort(int A[], int n){
    int i,j,x;
    
    for(i=1;i<n;i++){ // i starts from 1 because comparision is not done for first element
        j=i-1;
        x=A[i]; // copying the element to insert
        
        while(j>-1 && A[j]>x){ // j>-1 to indicate the element after 0th index
            A[j+1]=A[j]; // copying the element of j to next location
            j--;
        }
        A[j+1]=x; // copying the element that is taken
    }
}

int main()
{
    int A[]={2,6,7,3,8,9,1,0,5,4}, n=10;
    
    bubbleSort(A,n);
    
    for(int i=0;i<10;i++){
        printf("%d ", A[i]);
    }
    printf("\n");

    int A[]={2,6,7,3,8,9,1,0,5,4}, n=10;
    
    insertionSort(A,n);
    
    for(int i=0;i<10;i++){
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}