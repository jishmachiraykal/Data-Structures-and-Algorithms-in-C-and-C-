#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <math.h>
#define SIZE 10

int hash(int key){
    return key%SIZE; // returns index
}

int probe(int H[], int key){ // returns a new probe value where key can be inserted
    int index=hash(key),i=0;
    while(H[(index+i*i)%SIZE]!=0)
        i++;
    return (index+i*i)%SIZE;
}

void insert(int H[], int key){
    int index=hash(key);
    if(H[index]!=0){ // checking if index is occupied to insert already
        index=probe(H,key); // finding the next index where it can be inserted if there is already a element
    }
    H[index]=key;
    
}

int search(int H[], int key){
    int index=hash(key);
    int i=0;
    while(H[(index+i*i)%SIZE]!=key)
        i++;
    return (index+i*i)%SIZE;
}    

int main()
{
    int HT[10]={0};
    
    insert(HT,12);
    insert(HT,25);
    insert(HT,35);
    insert(HT,26);
    
    printf("Key found at %d\n ", search(HT,25));
    
    return 0;
}