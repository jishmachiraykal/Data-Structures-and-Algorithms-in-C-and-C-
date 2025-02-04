//finding single missing element in an sorted array starting from 1:
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

template <class T> // making it more generic as it can be used for any data type
class array{
private:
    T *A;
    int size;
    int length;

public:
   array(int sz){
       size=sz;
       A=new T[size];
       length=0;
}

   ~array(){ //destructor should have same name as class name with pre-fix ~
    delete []A;
}

    void display(); // not passing array as parameter because this function can access array members directly 
    void insert(int index, T x);
    void find_missing_no();
    void find_missing_element();
    void find_multiple_missing_no();
    void ind_multiple_missing_no_unsorted();
    void find_dulpicates();
    void find_no_of_dulpicates();
    void find_no_of_dulpicates_unsorted();
    void pair_of_elements();
    void pair_of_elements_sorted();
    void find_max_and_min();
};

template <class T> //template should be defined for each function
void array<T>::display(){
    for(int i=0; i<length;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
}

template <class T>
void array<T>::insert(int index,T x){
    if(index>=0 && index<=length){
        for(int i=length-1;i>=index;i--){
            A[i+1]=A[i];
        }
        A[index]=x;
        length++;
    }
}

template <class T>
void array<T>::find_missing_no(){
    int sum=0;
    for(int i=0;i<length;i++){
        sum=sum+A[i];
    }
    int s = (length + 1) * (length + 2) / 2;
    printf("Missing number is %d\n", s-sum);
}

//this function tries to find single missing element from an sorted array starting from some random number

template <class T>

void array<T>::find_missing_element(){
    int diff;
    diff=A[0]-0;
    for(int i=0;i<length;i++){
        if(A[i]-i != diff){
            int missing_element= i+diff;
            printf("Missing element= %d",missing_element);
            break;
        }
    }   
}

//finding multiple missing elements:
template <class T>
void array<T>::find_multiple_missing_no(){ //this function tries to find multiple missing element from an sorted array starting from some random number
    int diff;
    diff=A[0]-0;
    for(int i=0;i<length;i++){
        if(A[i]-i != diff){
            while(diff < (A[i]-i)){
                printf("Missing element: %d\n", i+diff);
                diff++;
            }
        }
    }   
}

//The below function is not fully correct.Finding the multiple missing element in an unsorted array
template <class T>
void array<T>::find_multiple_missing_no_unsorted(){ //this function tries to find mutiple missing element from an unsorted array starting
// with some random number
    int min_val = array[0], max_val = array[0];
    for (int num : array) {
        if (num < min_val) min_val = num;
        if (num > max_val) max_val = num;
    }

    array *h= new array(max_val);
    for(int i=0;i<length;i++){
        h[A[i]]++;
    }

    for(int min_val;i<=max_val;i++){
        if(h[i]==0){
            printf("Missing element: %d", i);
        }
    }
}

//finding duplicated in a sorted array:
template <class T>
void array<T>::find_dulpicates(){
// with some random number
    int last_duplicate=0;
    for(int i=0;i<length;i++){
        if(A[i]==A[i+1] && A[i]!=last_duplicate){
            printf("Duplicated element: %d\n",A[i]);
            last_duplicate=A[i];
        }
    }
}

template <class T>
void array<T>::find_no_of_dulpicates(){ //this function tries to find mutiple missing element from an unsorted array starting
    for(int i=0;i<length-1;i++){
        if(A[i]==A[i+1]){
            int j=i+1;
            while(A[j]==A[i])j++;
            printf("%d is duplicated %d times\n",A[i], j-i);
            i=j-1;
        }
    }
}

//finding duplicates in an unsorted array:
template <class T>
void array<T>::find_no_of_dulpicates_unsorted(){ //this function tries to find mutiple missing element from an unsorted array starting
    for(int i=0;i<length-1;i++){
        int count=1;
        if(A[i]!=1){
        for(int j=i+1;j<length;j++){
            if(A[i]==A[j]){
                count++;
                A[j]=-1;
            }
        }

        if(count>1){
            printf("%d duplicated %d times\n", A[i], count);
        }
        }
    }
}

//finding pair of elements with sum K:
template <class T>
void array<T>::pair_of_elements(T k){
    for(int i=0;i<length-1;i++){
        for(int j=i+1;j<length;j++){
            if(A[i]+A[j]==k){
                printf("%d+%d=%d\n", A[i],A[j],k);
            }
        }
    }
}

//finding a pair of elements with sum K in sorted array:
template <class T>
void array<T>::pair_of_elements_sorted(T k){
    int i=0,j=length-1;
    while(i<j){
        if(A[i]+A[j]==k){
            printf("%d + %d = %d\n", A[i],A[j],k);
            i++;// increament i and decrement j if they are equal
            j--;
        }
        else if(A[i]+A[j]<k){
            i++; // if total is less that k, then increment i
        }else{
            j--; // If the total is greater than k, decrement j
        }
    }
}

//finding max and min in a single scan:
template <class T>
void array<T>::find_max_and_min(){
    int min=A[0], max=A[0];
    for(int i=1;i<length;i++){ //since we are comparing from index 0 with next elements, i starts from 1
        if(A[i]<min){
            min=A[i];
        }else if(A[i]>max){
            max=A[i];
        }
    }
    printf("Min= %d\nMax=%d\n", min,max);
}

int main()
{
    array<int> arr1(10);
    arr1.insert(0,1);
    arr1.insert(1,2);
    arr1.insert(2,3);
    arr1.insert(3,5);
    arr1.insert(4,6);
    arr1.insert(5,18);
    arr1.insert(6,20);
    arr1.insert(7,21);
    arr1.insert(8,22);
    arr1.display();
    arr1.find_missing_no();
    arr1.find_missing_element();
    arr1.display();
    arr1.find_multiple_missing_no();

    arr.display();
    arr.find_dulpicates();
    arr.find_no_of_dulpicates();
    arr.find_no_of_dulpicates_unsorted();
    arr.pair_of_elements(12);
    arr.pair_of_elements_sorted(10);
    arr.find_max_and_min();
    
    return 0;
}

