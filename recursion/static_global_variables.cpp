//static and global variables will have single copy used for all function calls.
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
    int a=3;
    printf("%d\n",fun(a));
    
    return 0;
}