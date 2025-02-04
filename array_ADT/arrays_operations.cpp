//appeding/Adding and Inserting in an array:
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

struct array{
    int A[10];
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

int linearSearch(struct array arr, int key ){ //passing by value since it only searches for key element
    for(int i=0;i<arr.length;i++){
        if(key == arr.A[i]){
            return i;
        }
    }
    return -1;   
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

//move to front or move to head
int linearSearchM(struct array *arr, int key ){ //transposition or move to front will modify the array, hence call be address
    for(int i=0;i<arr->length;i++){
        if(key==arr->A[i]){
            swap(&arr->A[i],&arr->A[0]);
            return i;
        }
    }
    return -1;   
}

//binary search iterative process:
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

//recursive binary search:
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

//max, min and average functions:
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

//avg function:
float avg(struct array arr){
    return (float)sum(arr)/arr.length;
}


//reversing an array using auxiallary array:
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

//reversing an array using swap method:
void sReverse(struct array *arr){
    int i,j;
    for(i=0,j=arr->length-1;i<j;i++,j--){
        int temp=arr->A[i];
        arr->A[i]=arr->A[j];
        arr->A[j]=temp;
    }
}

//inserting in an sorted array
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
//checking if array os sorted
int isarraySorted(struct array arr){
    for(int i=0; i<arr.length-1;i++){
        if(arr.A[i]>arr.A[i+1]){
            return 0;
        }
    }
    return 1;
}

//rearranging +ve and -ve numbers
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

//merging arrays
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

//union
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
    struct array arr={{1,2,3,4,5},10,5};
    struct array arr1={{1,3,5,7,9},10,5};
    struct array arr2={{2,4,6,8,10},10,5};
    struct array *arr3;

    append(&arr,10);
    display_array(arr);
    insert(&arr,3,12);
    display_array(arr);

    delete_element(&arr, 3);
    display_array(arr);

    printf("%d\n",linearSearch(arr,5));
    display_array(arr);

    printf("%d\n",linearSearchT(&arr,5));

    printf("%d\n",linearSearchM(&arr,5));
    display_array(arr);

    printf("%d\n",binarySearch(arr,5));
    display_array(arr);

    printf("%d\n",RbinarySearch(arr.A,0,arr.length,5));
    display_array(arr);

    printf("%d\n", get(arr,4));

    set(&arr,0,10);//here printf is not given because it is not returning anything so need not to print, just setting the value
    printf("Max element is: %d\n", max(arr));
    printf("Min element is: %d\n", min(arr));
    printf("Total no.of element is: %d\n", sum(arr));
    printf("Average of all element is: %f\n", avg(arr));
    display_array(arr);

    reverse(&arr);
    display_array(arr);

    sReverse(&arr);
    display_array(arr);

    insertSort(&arr, 8);
    display_array(arr);

    printf("%d\n",isarraySorted(arr));
    display_array(arr);

    rearrange(&arr);
    display_array(arr);

    arr3=merge(&arr1,&arr2);
    display_array(*arr3);

    arr3=Union(&arr1,&arr2);
    display_array(*arr3);

    arr3=intersection(&arr1,&arr2);
    display_array(*arr3);

    arr3=difference(&arr1,&arr2);
    display_array(*arr3);

    return 0;
}