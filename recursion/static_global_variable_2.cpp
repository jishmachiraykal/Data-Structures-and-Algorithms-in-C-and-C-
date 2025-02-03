//behaviors of static and global variables when same function is called twice:
#include <iostream>
#include <stdio.h>

int fun(int n){
    static int x=0;
    if(n>0){
        x++;
    return fun(n-1)+x;
    }
    return 0;
}

int main()
{
    int a=5;
    printf("%d\n",fun(a));
    printf("%d\n",fun(a));// if we call 2 times x value from previous run will be taken and not from 0
    // and prints different result for both the runs

    return 0;
}