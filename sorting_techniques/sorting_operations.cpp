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

void selectionSort(int A[], int n){
    int i,j,k;
    
    for(i=0;i<n;i++){
        for(k=j=i;j<n;j++){
            if(A[j]<A[k]){
                k=j;
            }
        }
        swap(&A[i],&A[k]);
    }
}

int partition(int A[], int l, int h){
    int pivot=A[l]; // taking first element as pivot
    int i=l,j=h;
    do{
        do{i++;}while(A[i]<=pivot);
        do{j--;}while(A[j]>pivot);
        if(i<j){
            swap(&A[i],&A[j]);
        }
    }while(i<j);
    swap(&A[l],&A[j]);
    return j;
}

void quickSort(int A[], int l, int h){
    int j;
    if(l<h){
        j=partition(A,l,h);
        quickSort(A,l,j);
        quickSort(A,j+1,h);
    }   
}

void merge(int A[], int l, int m, int h){
    int i=l,j=m+1,k=l;
    int B[100]; // auxillary array of size 100
    
    while(i<=m && j<=h){
        if(A[i]<A[j]){
            B[k++]=A[i++];
        }else{
            B[k++]=A[j++];
        }
    }
    
    for(;i<=m;i++){ // here i starts from where it has stopped in the while loop, so it is not initialized
            B[k++]=A[i]; 
    }
    for(;j<=h;j++){ // here j starts from where it has stopped in the while loop, so it is not initialized
            B[k++]=A[j]; 
    }
    
    for(i=l;i<=h;i++){
        A[i]=B[i]; // transfering back the elements from B to A array
    }  
}


void imergeSort(int A[], int n){
    int i,p,l,m,h;
    
    for(p=2;p<=n;p=p*2){ // splitting the array into smaller parts and merging
        for(i=0;i+p-1<n;i=i+p){
            l=i;
            h=i+p-1;
            m=(l+h)/2;
            merge(A,l,m,h);
        }
    }
    if(p/2<n){ // checking if there are any more elements remaining
        merge(A,0,p/2-1,n);
    }
}

void rmergeSort(int A[], int l,int h){
    int m;
    
    if(l<h){
        m=(l+h)/2;
        rmergeSort(A,l,m); // recursive merge on left hand side
        rmergeSort(A,m+1,h); // recursive merge on right hand side
        merge(A,l,m,h); // merge from low to high using mid value
    }
}

void countSort(int A[], int n){
    int i,j,max,*c;
    
    max=findMax(A,n);
    c=(int *)malloc(sizeof(int)*(max+1)); // max+1 because array indexing starts from 0
    for(i=0;i<max+1;i++){
        c[i]=0; // making the count array elements as zero initially
    }
    
    for(i=0;i<n;i++){
        c[A[i]]++; // incrementing the index of count array
    }
    
    i=0,j=0;
    while(j<max+1){ // looping until count array is finished
        if(c[j]>0){
            A[i++]=j;
            c[j]--;
        }else{
            j++;
        }
    }
}

void shellSort(int A[], int n){
    int i,gap,j,temp;
    
    for(gap=n/2;gap>0;gap/=2){ // gap/=2, gap is divided by 2 for every pass
        for(i=gap;i<n;i++){
            temp=A[i];
            j=i-gap;
            while(j>=0 && A[j]>temp){
                A[j + gap] = A[j];
                j = j - gap;
            }
            A[j+gap]=temp;
        }
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

    int A[]={2,6,7,3,8,9,21,0,45,35}, n=10;
    
    selectionSort(A,n);
    
    for(int i=0;i<10;i++){
        printf("%d ", A[i]);
    }
    printf("\n");
    
    int A[]={2,6,7,3,8,9,1,0,5,4,65355}, n=11; // 65355 is the largest positive integer to compare the infinity value
    
    quickSort(A,0,10);
    
    for(int i=0;i<10;i++){
        printf("%d ", A[i]);
    }
    printf("\n");
    
    int A[]={2,6,7,3,8,9,1,0,5,4,35}, n=11; // 65355 is the largest positive integer to compare the infinity value
    
    imergeSort(A,n);
    
    for(int i=0;i<10;i++){
        printf("%d ", A[i]);
    }
    printf("\n");

    int A[]={2,6,7,3,8,9,1,0,5,4,35}, n=11; // 65355 is the largest positive integer to compare the infinity value
    
    rmergeSort(A,0,n-1);
    
    for(int i=0;i<10;i++){
        printf("%d ", A[i]);
    }
    printf("\n");
    
    int A[]={2,6,7,3,8,9,1,0,5,4,35}, n=11; // 65355 is the largest positive integer to compare the infinity value
    
    countSort(A,n);
    
    for(int i=0;i<10;i++){
        printf("%d ", A[i]);
    }
    printf("\n");

    int A[]={2,6,7,3,8,9,1,0,5,4,35}, n=11; // 65355 is the largest positive integer to compare the infinity value
    
    shellSort(A,n);
    
    for(int i=0;i<n;i++){
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}