//changing the case of a string:
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    char str[]="THANKS"; // no need of '\0' as it is encoded in double quotes
    int i;

    for(i=0;str[i]!='\0';i++){
        str[i]=str[i]+32; //adding +32 to get lower case, if subtracted with -32, then upper case will be printed
    }
    printf("%s\n",str);

    return 0;
}