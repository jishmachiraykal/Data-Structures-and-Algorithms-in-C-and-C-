#include <stdio.h>
#include <iostream>

void fun(int n){
   if(n>0){
    fun(n-1);
    printf("%d\n", n);
}
}

int main()
{
    int x=3;
    fun(3);
    
    return 0;
}