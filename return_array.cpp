#include <stdio.h>
#include <iostream>

using namespace std;

int * arr(int size ){ //2 values one is pass by address(a[]), another is pass by value(n)
    int *p;
    p=new int[size];

    for(int i=0;i<size;i++){
        p[i]=i+1;
    }

    return p;
}

int main()
{
    int *a,s=4;
    a=arr(s);   

    for(int i=0;i<s;i++){
        cout<<a[i]<<endl;
    }
    
    return 0;
}