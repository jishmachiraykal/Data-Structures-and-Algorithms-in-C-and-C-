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


void append(struct array *arr, int x){ // calling statck by address
    if(arr->length<arr->size){
        arr->A[arr->length++]=x;
    }
}

void insert(struct array *arr, int index,int x){ // calling statck by address
    if(index>=0 && index <=arr->length){
        for(int i=arr->length;i>index;i--)
            arr->A[i]=arr->A[i-1];
        arr->A[index]=x;
        arr->length++;
    }
}

int delete_element(struct array *arr, int index) {
    if (index >= 0 && index < arr->length) {
        int x = arr->A[index];
        for (int i = index; i < arr->length - 1; i++) {
            arr->A[i] = arr->A[i + 1];
        }
        arr->length--;
        return x;
    }
    return 0;
}

void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}


//transposition method
int linearSearchT(struct array *arr, int key ){ //transposition or move to front will modify the array, hence call be address
    for(int i=0;i<arr->length;i++){
        if(key==arr->A[i]){
            swap(&arr->A[i],&arr->A[i-1]);
            return i;
        }
    }
    return -1;   
}

int binarySearch(struct array arr,int key ){
        int l,mid,h;
        l=0;
        h=arr.length-1;

        while(l<=h){
            mid=(l+h)/2;
            if(key==arr.A[mid])
                return mid;
            else if(key<arr.A[mid])
                h=mid-1;
            else
                l=mid+1;
        }
        return -1;
}

int RbinarySearch(int a[],int l, int h,int key ){
        int mid;
        if(l<=h){
            mid=(l+h)/2;
            if(key==a[mid])
                return mid;
            else if(key<a[mid])
                return RbinarySearch(a,l,mid-1,key);
            else
                return RbinarySearch(a,mid+1,h,key);
        }
        return -1;
}

int get(struct array arr,int index){
    if(index>=0 && index<arr.length){
        return arr.A[index];
    }
    return -1;
}

void set(struct array *arr,int index, int x){
    if(index>=0 && index<arr->length){
        arr->A[index]=x;
    }
}

int max(struct array arr){
    int max=arr.A[0];
    for(int i=0;i<arr.length;i++){
        if(arr.A[i]>max)
            max=arr.A[i];
    }
    return max;
}



int min(struct array arr){
    int min=arr.A[0];
    for(int i=0;i<arr.length;i++){
        if(arr.A[i]<min)
            min=arr.A[i];
    }
    return min;
}

int sum(struct array arr){
    int sum=0;
    for(int i=0;i<arr.length;i++){
        sum=sum+arr.A[i];
    }
    return sum;
}

float avg(struct array arr){
    return (float)sum(arr)/arr.length;
}

void reverse(struct array *arr){
    int *B,i,j;
    B=(int *)malloc(arr->length*sizeof(int)); //creating an auxiallary array

    for(i=arr->length-1,j=0;i>=0;i--,j++){
        B[j]=arr->A[i];
    }

    for(i=0;i<arr->length;i++){
        arr->A[i]=B[i];
    }
}

void sReverse(struct array *arr){
    int i,j;
    for(i=0,j=arr->length-1;i<j;i++,j--){
        int temp=arr->A[i];
        arr->A[i]=arr->A[j];
        arr->A[j]=temp;
    }
}

void insertSort(struct array *arr, int x){
    int i=arr->length-1;
    if(arr->length == arr->size) //which means there is no free space and we cannot insert element, so exiting   
    return;

    while(i>=0 && arr->A[i]>x){
        arr->A[i+1]=arr->A[i];
        i--;
    }

    arr->A[i+1]=x;
    arr->length++;
}

int isarraySorted(struct array arr){
    for(int i=0; i<arr.length-1;i++){
        if(arr.A[i]>arr.A[i+1]){
            return 0;
        }
    }
    return 1;
}

void rearrange(struct array *arr){
    int i,j;
    i=0;
    j=arr->length-1;

    while(i<j){
        while(arr->A[i]>0)i++;
        while(arr->A[j]<=0)j--;
        if(i<j)swap(&arr->A[i],&arr->A[j]);
    }
}

struct array* merge(struct array *arr1,struct array *arr2){
    int i,j,k;
    i=j=k=0;

    struct array *arr3=(struct array *)malloc(sizeof (struct array));
	while(i<arr1->length && j<arr2->length){
        if(arr1->A[i]<arr2->A[j]){
            arr3->A[k++]=arr1->A[i++];
        }else{
            arr3->A[k++]=arr2->A[j++];
        }
    }

    for(;i<arr1->length;i++)
       arr3->A[k++]=arr1->A[i];
    for(;j<arr2->length;j++)
        arr3->A[k++]=arr2->A[j];
    arr3->length=arr1->length+arr2->length;
    arr3->size=10;

    return arr3;
}

struct array* Union(struct array *arr1,struct array *arr2){
    int i,j,k;
    i=j=k=0;
    struct array *arr3=(struct array *)malloc(sizeof (struct array));
  	while(i<arr1->length && j<arr2->length){
        if(arr1->A[i]<arr2->A[j]){
            arr3->A[k++]=arr1->A[i++];
 	}else if(arr2->A[j]<arr1->A[i]){
            arr3->A[k++]=arr2->A[j++];
        }else{
            arr3->A[k++]=arr1->A[i++];
            j++;
        }
    }

    for(;i<arr1->length;i++)
       arr3->A[k++]=arr1->A[i];
    for(;j<arr2->length;j++)
        arr3->A[k++]=arr2->A[j];
    arr3->length=k;
    arr3->size=10;
    return arr3;
}

struct array* intersection(struct array *arr1,struct array *arr2){
    int i,j,k;
    i=j=k=0;
    struct array *arr3=(struct array *)malloc(sizeof (struct array));
    while(i<arr1->length && j<arr2->length){

        if(arr1->A[i]<arr2->A[j]){
            i++;
        }else if(arr2->A[j]<arr1->A[i]){
            j++;
        }else if(arr1->A[i]=arr2->A[j]){
            arr3->A[k++]=arr1->A[i++];
            j++;
        }
    }
    arr3->length=k;
    arr3->size=10;
    return arr3;
}

struct array* difference(struct array *arr1,struct array *arr2){ // arr1-arr2
    int i,j,k;
    i=j=k=0;
    struct array *arr3=(struct array *)malloc(sizeof (struct array));
    while(i<arr1->length && j<arr2->length){
        if(arr1->A[i]<arr2->A[j]){
	  arr3->A[k++]=arr1->A[i++];
        }else if(arr2->A[j]<arr1->A[i]){
            j++;
        }else {
            i++;
            j++;
        }
    }
    for(;i<arr1->length;i++)
        arr3->A[k++]=arr1->A[i];
    arr3->length=k;
    arr3->size=10;
    return arr3;

}

int main()
{
int ch=0,x,index;

    struct array arr1;
    
    printf("Enter the size of an array: ");
    scanf("%d", &arr1.size);
    arr1.A=(int *)malloc(arr1.size*sizeof(int));

    do
    {
    printf("Menu: \n");
    printf("1.Insert:\n");
    printf("2.Delete:\n");
    printf("3.Search:\n");
    printf("4.Sum:\n");
    printf("5.Display:\n");
    printf("6.Exit:\n");
    printf("Enter your choice:");
    scanf("%d",&ch);
    
    switch(ch)
    {
        case 1:printf("Enter an element and index");
        scanf("%d%d",&x,&index);
        insert(&arr1,index,x);
        break;
        case 2: printf("Enter index ");
        scanf("%d",&index);
        x=delete_element(&arr1,index);
        printf("Deleted Element is %d\n",x);
        break;
        case 3:printf("Enter element to search ");
        scanf("%d",&x);
        index=linearSearchT(&arr1,x);
        printf("Element index %d",index);
        break;
        case 4:printf("Sum is %d\n",sum(arr1));
        break;
        case 5:display_array(arr1);
    }    
    }while(ch<6);
    
    return 0;
}