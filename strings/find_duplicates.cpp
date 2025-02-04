//finding duplicates in a string using hash table:
#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

// finding duplicates for lower case
int main() {
    char A[] = "character";
    int h[26]={0}, i;

    for(i=0;A[i]!='\0';i++){
        h[A[i]-97]+=1; //assigning 1 to array index which are present in the string
    }

    for(i=0;i<26;i++){
            if(h[i]>1){
                printf("%c\n", i+97); // adding 97 to find the ascii code of the duplicated character
                printf("%d\n", h[i]); // printing the number of time it has repeated
            }
    }

    return 0;
}