//finding the length of a string:
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    char str[]="Thanks"; // no need of '\0' as it is encoded in double quotes
    int i;
    for(i=0;str[i]!='\0';i++){
    }
    printf("Length of the string is %d\n",i);
   
    return 0;
}