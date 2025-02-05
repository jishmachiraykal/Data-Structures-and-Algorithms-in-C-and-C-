//display doubly linked list:
#include <stdlib.h>
#include <stdio.h>
#include <iostream>

using namespace std;

struct node{
  struct node *previous;
  int data;
  struct node *next;
}*first=NULL;

void create(int A[], int n){
    struct node *t,*last;
    int i;

    first=(struct node *)malloc(sizeof(struct node));

    first->data=A[0];
    first->previous=NULL;
    first->next=NULL;

    last=first;

    for(i=1;i<n;i++){
        t=(struct node *)malloc(sizeof(struct node));
        t->data=A[i];
        t->next=last->next;
        t->previous=last;
        last->next=t;
        last=t;
    }
}

int count(struct node *p){
    int count=0;

    while(p!=0){
        count++;
        p=p->next;
    }
    return count;
}

void display(struct node *p){
    while(p!=0){
        printf("%d ", p->data);
        p=p->next;
    }
    printf("\n");
}

void insert(struct node *p, int index, int x){
    struct node *t;
    int i;
    
    if(index<0 || index>count(p)){
        return;
    }
    
    if(index==0){ // inserting at position 0
        t=(struct node *)malloc(sizeof(struct node));
        t->data=x;
        t->previous=NULL;
        t->next=first;
        first->previous=t;
        first=t;
    }else{
        for(i=0;i<index-1;i++){
            p=p->next;
        }
        t=(struct node *)malloc(sizeof(struct node));
        t->data=x;
        t->previous=p;
        t->next=p->next;
        if(p->next){ //checking if p->next node is present and not null.Making sure we are not inserting after the last node 
            p->next->previous=t;
        }
        p->next=t;
    }
}

int delete_node(struct node *p, int index){
    int x=-1,i;
    
    if(index<0 || index>count(p)){
        return 0;
    }
    
    if(index==1){ //deleting the first node
        first=first->next;
        if(first){ //checking if first is not null
            first->previous=NULL;   
        }
        
        x=p->data;
        free(p);
    }else{
        for(i=0;i<index-1;i++){
            p=p->next;
        }
        p->previous->next=p->next;
        if(p->next){ //checking if p->next node is present and not null.Making sure we are not deleting after the last node 
            p->next->previous=p->previous;
        }
        x=p->data;
        free(p);
    }
    return x;
}

void reverse(struct node *p){
    struct node *temp;
    
    while(p!=NULL){
        temp=p->next;
        p->next=p->previous;
        p->previous=temp;
        p=p->previous;
        if(p!=NULL && p->next==NULL){ //checking if it is a last node
            first=p; // if so pointer should be pointing on that
        }
    }
}

int main()
{
    int A[]={12,34,56,77,98};

    create(A,5);
    printf("Count = %d\n", count(first));
    display(first);

    create(A,5);
    insert(first,2,9);

    create(A,5);
    printf("Deleted data is %d\n",delete_node(first,4));
    display(first);
    
    create(A,5);
    reverse(first);
    display(first);

    return 0;
}
