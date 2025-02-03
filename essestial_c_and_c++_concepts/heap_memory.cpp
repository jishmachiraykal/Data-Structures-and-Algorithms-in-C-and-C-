//creating heap memory in C and C++:
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int *p;
    //creating memory in heap in C
    p=(int *) malloc(4* sizeof(int)); //here 4 is the no.of integers we want in heap

    //creating memory in heap in C++
    p=new int[5];
}