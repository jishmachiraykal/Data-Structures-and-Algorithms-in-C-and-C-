//reversing the string
#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

//exchanging the characters of string and reversing it
int main()
{
    char A[]="Certification";
    char temp;
    int i,j;

    for(j=0;A[j]!='\0';j++){

    }

    j=j-1; //skipping the \0 and going to last character of string
    for(i=0;i<j;i++,j--){
        temp=A[i];
        A[i]=A[j]; 
        A[j]=temp;
    }
    printf("Reversed string is %s\n", A);

    return 0;
}