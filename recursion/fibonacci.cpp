//fibonacci series using recursion:
#include <stdio.h>
#include <iostream>

int fib(int n){
    if(n <=1){
        return n;
    }else{
        return fib(n-2) + fib(n-1);
    }
}

int main()
{
    int x=fib(6);
    printf("%d\n", x);

    return 0;
}