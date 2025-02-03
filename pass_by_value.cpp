#include <stdio.h>
#include <iostream>

using namespace std;

void swap(int x, int y){
    int temp;
    temp=x;
    x=y;
    y=temp;
}

int main()
{
    int n1=100,n2=200,s;
    swap(n1,n2);

    cout << "Result = "<<n1<< endl <<n2 <<endl;
    return 0;
}