#include <stdio.h>
#include <iostream>

using namespace std;

void arr(int a[], int n){ //2 values one is pass by address(a[]), another is pass by value(n)
    for(int i=0; i<n;i++){
        printf("%d ", a[i]);
    }
}

int main()
{
    int a[3]={1,2,3};
    arr(a,3);

    return 0;
}