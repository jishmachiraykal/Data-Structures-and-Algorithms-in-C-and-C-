//toggling the case of a string:
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    char str[]="tHANKs"; // no need of '\0' as it is encoded in double quotes
    int i;
    for(i=0;str[i]!='\0';i++){
        if(str[i]>=65 && str[i]<90){
            str[i]=str[i]+32;
        }else if(str[i]>=97 && str[i]<122){ // instead of 97, 'a' can also be written
            str[i]=str[i]-32;
        }
    }
    printf("%s\n",str);

    return 0;
}