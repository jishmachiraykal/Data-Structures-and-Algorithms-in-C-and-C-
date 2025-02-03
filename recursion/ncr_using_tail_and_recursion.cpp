//nCr using factorial and recursion:
#include <stdio.h>
#include <iostream>

int fact(int n){
    if(n==0)return 1;
    return fact(n-1)*n;
}

int nCr(int n, int r){ //nCr using factorial
    int num, den;
    num=fact(n);
    den=fact(n-r)*fact(r);
    return num/den;
}

int NCR(int n, int r){ //nCr using recursion
    if(n==r || r==0){
        return 1;
    }else{
        return NCR(n-1,r-1)+NCR(n-1,r);
    }
}

int main()
{
    printf("%d\n%d\n%d\n", fact(3), nCr(5,1), NCR(5,1));

    return 0;
}