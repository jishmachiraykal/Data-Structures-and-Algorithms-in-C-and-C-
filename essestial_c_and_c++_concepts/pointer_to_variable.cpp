#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int a =10;
    int *p; //declaration
    p=&a; //initialization

    cout<<a<<endl;
    cout<<*p<<endl;
    cout<<p<<endl;
    cout<<&a<<endl;
}