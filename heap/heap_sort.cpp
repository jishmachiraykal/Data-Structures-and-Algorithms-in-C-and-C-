#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

void insert(int A[],int n) 
{ 
    int i=n,temp; 
    temp=A[i]; 
    while(i>1 && temp>A[i/2]) { 
        A[i]=A[i/2]; 
        i=i/2; 
    } 
    A[i]=temp; 
} 

int delete_element(int A[], int n){
    int i,j,x,temp,value;
    value=A[1];
    x=A[n];
    A[1]=A[n]; // last element is copied to first place
    A[n]=value; // copying last element to first
    
    i=1; // i starting from first element
    j=2*i; // j pointing on left side of int
    
    while(j<n-1){
        if(A[j+1]>A[j]){ // checking if right child is greater than left child
            j=j+1; // moving j to next location i.e., pointing to right child
        }
        if(A[i]<A[j]){
            temp=A[i];
            A[i]=A[j];
            A[j]=temp;
            i=j;
            j=2*i; // moving to left child
        }else{
            break;
        }
    }
    return value;
}


int main()
{
    int H[]={0,10,20,30,25,5,40,35}; // skipping the 0th index
    for(int i=2;i<=7;i++){
        insert(H,i);
    }
    
    for(int i=7;i>1;i--){
        delete_element(H,i);
    }
    
    for(int i=1;i<=7;i++){
        printf("%d ",H[i]);
    }
    printf("\n");

    return 0;
}