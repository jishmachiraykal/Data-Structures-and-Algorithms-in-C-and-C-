#include <stdio.h>
#include <iostream>

void fun(int n){
   int i=1;
   while(i<=n){
    printf("%d\n", i);
    i++;
}
}

int main()
{
    int x=3;
    fun(3);

    return 0;
}