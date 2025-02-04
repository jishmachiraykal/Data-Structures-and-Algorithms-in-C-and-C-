//displaying an array by creating an array using pointer:
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

struct array{
    int *A;
    int size; //size of an array
    int length; //number of elements in an array
};

void display_array(struct array arr){
        for(int i=0;i<arr.length;i++){
            printf("Elements are:%d\n", arr.A[i]);
        }
}

int main()
{
    struct array arr;
    int n;
    printf("Enter the size of an array: ");
    scanf("%d",&arr.size);
    arr.A=(int *)malloc(arr.size*sizeof(int));
    arr.length=0;

    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter all the elements:");

    for(int i=0;i<n;i++){
       scanf("%d", &arr.A[i]);
    }

    arr.length=n;

    display_array(arr);
    
    return 0;
}