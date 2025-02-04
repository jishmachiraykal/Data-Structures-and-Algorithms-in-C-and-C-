//counting vowels, consonants and words in a string:
#include <stdio.h>
#include <iostream>

int main()
{
    char A[]= "How are   you";
    int vcount=0,ccount=0, word=0;

    for(int i=0;A[i]!='\0';i++){
        if(A[i]=='a'|| A[i]=='e'|| A[i]=='i'|| A[i]=='o'|| A[i]=='u'|| A[i]=='A'|| A[i]=='E'|| A[i]=='I'|| A[i]=='O'||A [i]=='U'){
            vcount++;
        }else if((A[i]>=65 && A[i]<=90) || (A[i]>=97 && A[i]<=122) ){
            ccount++;
        }

        if(A[i]==' ' && A[i-1]!=' '){ // continues set of spaces is called as whitespace, so checking that condition also
            word++;
        }
    }
    printf("Number of vowels and consonants present in string is %d and %d respectively\n", vcount,ccount);
    printf("Number of words present in this string is %d\n", word+1);// word++ given no.of spaces, word+1 gives exact no.of words

    return 0;
}