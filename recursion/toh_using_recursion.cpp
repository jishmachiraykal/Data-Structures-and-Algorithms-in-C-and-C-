//TOH using recursion:
#include <stdio.h>
#include <iostream>

void TOH(int n, int A, int B, int C){
    if(n>0){
        TOH(n-1, A,C,B);
        printf("(%d,%d)\n", A , C);
        TOH(n-1,B,A,C);
    }
}

int main()
{
    TOH(3,1,2,3);//3=number of disks, 1=source tower,2=second tower, 3=destination tower

    return 0;
}

//Note: By following the output combination, we can move one disk at a time from tower A to C using B