//permutation of a string:
#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

void permutation(char str[], int k){
    static int A[10]={0};
    static char B[10];
    int i;

    if(str[k]=='\0'){
        B[k]='\0'; printf("%s\n",B);
    }else{   
    for(i=0;str[i]!='\0';i++){
        if(A[i]==0){ //checking if alphabet is available
            B[k]=str[i];
            A[i]=1;
            permutation(str,k+1); //calling itself to form a tree
            A[i]=0; //make index zero while returning back
        }
    }
  }
}

int main() {
    char str[]="ABCD";
    permutation(str,0);

    return 0;
}