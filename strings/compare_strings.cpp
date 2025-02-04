//comparing two strings:
#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

//exchanging the characters of string and reversing it
int main()
{
    char A[]="painter";
    char B[]="painting";
    int i,j;

    for(i=0,j=0; A[i]!='\0' && B[j]!='\0';i++,j++){
        if(A[i]!=B[j]){
            break;
        }
    }

    //comparing first string with second string
    if(A[i]==B[j]){
        printf("Equal strings\n");
    }else if(A[i]<B[j]){
        printf("First string is smaller than second string");
    }else{
        printf("First string is greater than second string");
    }

    return 0;
}