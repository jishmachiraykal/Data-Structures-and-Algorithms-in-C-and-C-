//menu driven program for diagonal matrix(This code is not completely correct and needs correction):
#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    int *A,n,ch,x,i,j;

    printf("Enter dimension: ");
    scanf("%d\n",&n);

    // creating memory in heap
    A=(int *) malloc(n*sizeof(int)); // sizeof int because array created is of int
    do{
    printf("Menu\n");
    printf("1.Create a matrix:\n");
    printf("2.Get an element from matrix:\n");
    printf("3.Set element in matrix:\n");
    printf("4.Display matrix:\n");
    printf("Enter your choice ");
    scanf("%d", &ch);

    switch(ch)
    {
      case 1: for(int i=1;i<=n;i++)
                scanf("%d", &A[i]);
                break;

      case 2: printf("Enter indices");
              scanf("%d %d", &i,&j);
              if(i==j) printf("%d",A[i]);
              else printf("0");
              break;

      case 3: printf("Enter row, column and element to set: ");
              scanf("%d %d %d", &i,&j,&x);
              if(i==j) A[i]=x;
              break;
       case 4: for(i=1;i<=n;i++){
                for(j=1;j<=n;j++){
                    if(i==j){
                        printf("%d ", A[i]);
                     }else{
                        printf("0 ");
                    }
                }
                printf("\n");
            }
            break;
    }
    }while(ch<5);

    return 0;
}