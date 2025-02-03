#include <stdio.h>
#include <iostream>

void fun(int n){
   while(n>0){
    printf("%d\n", n);
    n--;
}
}

int main()
{
    int x=3;
    fun(3);
    
    return 0;
}