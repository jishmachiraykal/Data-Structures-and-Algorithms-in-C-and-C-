//changing actual parameters using pass by address(pointer):
#include <stdio.h>
#include <iostream>

using namespace std;

void arr(int a[], int n){ //2 values one is pass by address(a[]), another is pass by value(n)
    a[0]=23;
}

int main()
{
    int a[3]={1,2,3};
    arr(a,3);
    for(int x:a)
    cout << x << endl;

    return 0;
}