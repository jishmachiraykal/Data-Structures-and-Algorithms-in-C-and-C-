//finding the duplicates in a string using bitwise operations:
#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

// finding duplicates for lower case
int main() {
    char A[] = "character";
    long int i, h=0,x=0;

    for(i=0;A[i]!='\0';i++){
        x=1;
        x=x<<(A[i]-97);

        if((x&h)>0){ // >0 means some non-zero value
            printf("%c is duplicate\n", A[i]);
        }else{
            h=(x|h); // set the bit to 1 and it is not set before
        }
    }

    return 0;
}