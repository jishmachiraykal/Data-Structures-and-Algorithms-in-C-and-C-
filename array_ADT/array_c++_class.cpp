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
   array(){
       size=10;
       A=new T[10];
       length=0;
   }

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
    T delete_element(int index); // effect of template will be finished with this class
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
T array<T>::delete_element(int index){
    T x=0;
    if(index>=0 && index<length){
        x=A[index];
        for(int i=index;i<length-1;i++){
            A[i]=A[i+1];
        }
        length--;
    }
    return x;
}

int main()
{
    cout<<"Integer type array "<<endl;
    array<int> arr1(10);

    arr1.insert(0,1);
    arr1.insert(1,2);
    arr1.insert(2,3);
    arr1.insert(3,4);
    arr1.insert(4,5);
    arr1.display();

    cout<<arr1.delete_element(1)<<endl;

    arr1.display();
    cout<<"Floating type array "<<endl;
    array<float> arr2(10);

    arr2.insert(0,1.1);
    arr2.insert(1,2.4);
    arr2.insert(2,3.3);
    arr2.insert(3,4.7);
    arr2.insert(4,5.1);
    arr2.display();

    cout<<arr2.delete_element(1)<<endl;
    arr2.display();

    return 0;
}