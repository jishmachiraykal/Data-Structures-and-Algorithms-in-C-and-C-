//validating a string:
#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

// valid string should contain alphabets and numbers, no special characters
int isStringValid(char name[]){
    for(int i=0;name[i]!='\0';i++){
        if(!(name[i]>=65 && name[i]<=90) && !(name[i]>=97 && name[i]<=122) && !(name[i]>=48 && name[i]<=57)){
            return 0;
        }
    }
    return 1;
}

int main()
{
    char name[]="Joy346!";

    if(isStringValid(name)){
        printf("Valid string\n");
    }else{
        printf("Invalid string\n");
    }

    return 0;
}