//increase the array size:
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

int main ()
{
    int *p,*q;
    p= (int *)malloc(5*sizeof(int));
    p[0]=1;p[1]=2;p[2]=5;p[3]=7;p[4]=3;

    //creating an array of bigger size
    q= (int *)malloc(9*sizeof(int));
    for(int i=0;i<5;i++){
        q[i]=p[i];  // tranfering values from p into q
    }

    delete []p;
    p=q; //again transfering back the values from q to p
    q=NULL;
    for(int i=0;i<9;i++){
        printf("%d\n", p[i]);   
    }
}