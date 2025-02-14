#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include <stdint.h>
#include "chain.h"

using namespace std;

int hash(int key){
    return key%10; // key/arr.size
}

void hashInsert(struct node *H[], int key){
        int index=hash(key);
        insert(&H[index],key);
}

int main()
{
    struct node *HT[10];
    struct node *temp;
    int i;
    
    for(i=0;i<10;i++){
        HT[i]=NULL;
    }
    
    hashInsert(HT,12);
    hashInsert(HT,22);
    hashInsert(HT,32);
    
    temp=search(HT[hash(22)],22);
    
    printf("%d ",temp->data);
    return 0;
}