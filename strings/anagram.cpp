//check if two strings are anagram:

#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

// finding duplicates for lower case
int main() {
    char A[] = "decimal";
    char B[] = "medical";
    int i, h[26]={0};

    for(i=0;A[i]!='\0';i++){
        h[A[i]-97]+=1;
    }   

    for(i=0;B[i]!='\0';i++){
        h[A[i]-97]-=1; // decrementing array h because if there is different element then it becomes -1. So the string will not be anagram
        if(h[A[i]-97] < 0){
            printf("Not anagram\n");
            break;
        }
    }
      if(B[i] == '\0'){ //checking if we reached end of string to confirm anagram
        printf("String is anagram\n"); //duplication logic will also works with hashing logic
    }

    return 0;
}