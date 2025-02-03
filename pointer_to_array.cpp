#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int a[10]={1,2,3,4,5};
    int *p;
    p=a; //need not to have &a to store address when using std::array
    // or the syntax should be like p=&a[0] because name of the array is the staring address of an array
    for(int i=0;i<5;i++){
    cout<<p[i]<<endl;// here p is a pointers which can act as an array
    }

    cout<<"-----------"<<endl;

    //creating array in heap
    int *n;
    n=(int *)malloc(5*sizeof(int));// in C

    //n=new int[5];
    n[0]=10;n[0]=20;n[0]=30;n[0]=40;n[0]=50;
    for(int i=0;i<5;i++){
    cout<<p[i]<<endl;// here p is a pointers which can act as an array
    }
   
    delete [] n; //whenever dynamically memory allocated , release it once after using it
    // this is free(p) in C
    return 0;
}