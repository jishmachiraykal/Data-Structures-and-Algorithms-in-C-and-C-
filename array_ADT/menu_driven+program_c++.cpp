#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

class array{
private:
    int *A;
    int size; //size of an array
    int length; //number of elements in an array
    void swap(int *x,int *y); //since this function is called inside another function, making it private
public:
    array(){ //non-parameterized constructor
        size=10;
        length=0;
        A=new int[size];
    }
    
    array(int sz){ //parameterized constructor
        size=sz;
        length=0;
        A=new int[size];
    }
    
    ~array(){ //destructor
        delete []A;
    }
    
    void display_array();
    void append(int x);
    void insert(int index,int x);
    int delete_element(int index);
    int linearSearchT(int key );
    int binarySearch(int key );
    //int RbinarySearch(int a[],int l, int h,int key);
    int get(int index);
    void set(int index, int x);
    int max();
    int min();
    int sum();
    float avg();
    void reverse();
    void sReverse();
    void insertSort(int x);
    int isarraySorted();
    void rearrange();
    array* merge(struct array arr2);
    array* Union(struct array arr2);
    array* intersection(struct array arr2);
    array* difference(struct array arr2);
};

void array::display_array(){
        for(int i=0;i<length;i++){
            printf("Elements are:%d\n", A[i]);
        }
}


void array::append(int x){ // calling statck by address
    if(length<size){
        A[length++]=x;
    }
}

void array::insert(int index,int x){ // calling statck by address
    if(index>=0 && index <=length){
        for(int i=length;i>index;i--)
            A[i]=A[i-1];
        A[index]=x;
        length++;
    }
}

int array::delete_element(int index) {
    if (index >= 0 && index < length) {
        int x = A[index];
        for (int i = index; i < length - 1; i++) {
            A[i] = A[i + 1];
        }
        length--;
        return x;
    }
    return 0;
}

void array::swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}


//transposition method
int array::linearSearchT(int key ){ //transposition or move to front will modify the array, hence call be address
    for(int i=0;i<length;i++){
        if(key==A[i]){
            swap(&A[i],&A[i-1]);
            return i;
        }
    }
    return -1;   
}

int array::binarySearch(int key ){
        int l,mid,h;
        l=0;
        h=length-1;

        while(l<=h){
            mid=(l+h)/2;
            if(key==A[mid])
                return mid;
            else if(key<A[mid])
                h=mid-1;
            else
                l=mid+1;
        }
        return -1;
}

// int array::RbinarySearch(int a[],int l, int h,int key ){
//         int mid;
//         if(l<=h){
//             mid=(l+h)/2;
//             if(key==a[mid])
//                 return mid;
//             else if(key<a[mid])
//                 return RbinarySearch(a,l,mid-1,key);
//             else
//                 return RbinarySearch(a,mid+1,h,key);
//         }
//         return -1;
// }

int array::get(int index){
    if(index>=0 && index<length){
        return A[index];
    }
    return -1;
}

void array::set(int index, int x){
    if(index>=0 && index<length){
        A[index]=x;
    }
}

int array::max(){
    int max=A[0];
    for(int i=0;i<length;i++){
        if(A[i]>max)
            max=A[i];
    }
    return max;
}



int array::min(){
    int min=A[0];
    for(int i=0;i<length;i++){
        if(A[i]<min)
            min=A[i];
    }
    return min;
}

int array::sum(){
    int sum=0;
    for(int i=0;i<length;i++){
        sum=sum+A[i];
    }
    return sum;
}

float array::avg(){
    return (float)sum()/length;
}

void array::reverse(){
    int *B,i,j;
    B=(int *)malloc(length*sizeof(int)); //creating an auxiallary array

    for(i=length-1,j=0;i>=0;i--,j++){
        B[j]=A[i];
    }

    for(i=0;i<length;i++){
        A[i]=B[i];
    }
}

void array::sReverse(){
    int i,j;
    for(i=0,j=length-1;i<j;i++,j--){
        int temp=A[i];
        A[i]=A[j];
        A[j]=temp;
    }
}

void array::insertSort(int x){
    int i=length-1;
    if(length == size) //which means there is no free space and we cannot insert element, so exiting   
    return;

    while(i>=0 && A[i]>x){
        A[i+1]=A[i];
        i--;
    }

    A[i+1]=x;
    length++;
}

int array::isarraySorted(){
    for(int i=0; i<length-1;i++){
        if(A[i]>A[i+1]){
            return 0;
        }
    }
    return 1;
}

void array::rearrange(){
    int i,j;
    i=0;
    j=length-1;

    while(i<j){
        while(A[i]>0)i++;
        while(A[j]<=0)j--;
        if(i<j)swap(&A[i],&A[j]);
    }
}

array* array::merge(array arr2){
    int i,j,k;
    i=j=k=0;

    array *arr3=new array(length+arr2.length);
	while(i<length && j<arr2.length){
        if(A[i]<arr2.A[j]){
            arr3->A[k++]=A[i++];
        }else{
            arr3->A[k++]=arr2.A[j++];
        }
    }

    for(;i<length;i++)
       arr3->A[k++]=A[i];
    for(;j<arr2.length;j++)
        arr3->A[k++]=arr2.A[j];
    arr3->length=length+arr2.length;

    return arr3;
}

array* array::Union(array arr2){
    int i,j,k;
    i=j=k=0;
    array *arr3=new array(length+arr2.length);
  	while(i<length && j<arr2.length){
        if(A[i]<arr2.A[j]){
            arr3->A[k++]=A[i++];
 	}else if(arr2.A[j]<A[i]){
            arr3->A[k++]=arr2.A[j++];
        }else{
            arr3->A[k++]=A[i++];
            j++;
        }
    }

    for(;i<length;i++)
       arr3->A[k++]=A[i];
    for(;j<arr2.length;j++)
        arr3->A[k++]=arr2.A[j];
    arr3->length=k;
    return arr3;
}

array* array::intersection(array arr2){
    int i,j,k;
    i=j=k=0;
    array *arr3=new array(length+arr2.length);
    while(i<length && j<arr2.length){

        if(A[i]<arr2.A[j]){
            i++;
        }else if(arr2.A[j]<A[i]){
            j++;
        }else if(A[i]=arr2.A[j]){
            arr3->A[k++]=A[i++];
            j++;
        }
    }
    arr3->length=k;
    return arr3;
}

array* array::difference(array arr2){ // arr1-arr2
    int i,j,k;
    i=j=k=0;
    array *arr3=new array(length+arr2.length);
    while(i<length && j<arr2.length){
        if(A[i]<arr2.A[j]){
	  arr3->A[k++]=A[i++];
        }else if(arr2.A[j]<A[i]){
            j++;
        }else {
            i++;
            j++;
        }
    }
    for(;i<length;i++)
        arr3->A[k++]=A[i];
    arr3->length=k;
    return arr3;

}

int main()
{
int ch,sz,x,index;

    array *arr1;
    
    cout<<"Enter the size of an array: "<<endl;
    cin>>sz;
    arr1=new array(sz);

    do
    {
    cout<<"Menu:"<<endl;
    cout<<"1.Insert: "<<endl;
    cout<<"2.Delete:"<<endl;
    cout<<"3.Search: "<<endl;
    cout<<"4.Sum: "<<endl;
    cout<<"5.Display "<<endl;
    cout<<"6.Exit: "<<endl;
    cout<<"Enter your choice: "<<endl;
    cin>>ch;
    
    switch(ch)
    {
        case 1:cout<<"Enter an element and index";
        cin>>x>>index;
        arr1->insert(index,x);
        break;
        case 2: cout<<"Enter index ";
        cin>>index;
        x=arr1->delete_element(index);
        cout<<"Deleted Element is %d\n"<<x;
        break;
        case 3:cout<<"Enter element to search ";
        cin>>x;
        index=arr1->linearSearchT(x);
        cout<<"Element index %d"<<index;
        break;
        case 4:cout<<"Sum is %d\n"<<arr1->sum();
        break;
        case 5:arr1->display_array();
    }    
    }while(ch<6);
    
    return 0;
}