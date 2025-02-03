//fibonacci series using loop:
#include <stdio.h>
#include <iostream>

int fib(int n){
    int t0=0, t1=1,s;
    if(n <=1){
        return n;
    }else{
        for(int i=2;i<=n;i++){
            s=t0+t1;
            t0=t1;
            t1=s;
        }
        return s;
    }
}

int main()
{
    int x=fib(7);
    printf("%d\n", x);
    
    return 0;
}