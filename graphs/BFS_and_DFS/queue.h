#ifndef queue_h
#define queue_h

#include <stdlib.h>
#include <stdio.h>
#include <iostream>

using namespace std;

struct node{
    int data;
    struct node *next;
}*front=NULL,*rear=NULL;

void enqueue(int x){
    struct node *t;
    t=(struct node *)malloc(sizeof(struct node));
    if(t==NULL){ // if t is not created(NULL), then queue is full
        printf("Queue is full\n");
    }else{
        t->data=x;
        t->next=NULL; // first node
        if(front==NULL){ //checking if is first node
            front=rear=t;
        }else{
            rear->next=t;
            rear=t;
        }
    }
}

int dequeue(){
    int x=-1;
    struct node *t;
    
    if(front==NULL){
        printf("Queue is empty\n");
    }else{
        x=front->data;
        t=front;
        front=front->next;
        free(t);
    }
    return x;
}

void display(){
    struct node *p=front;
    while(p!=NULL){
        printf("%d ", p->data);
        p=p->next;
    }
    printf("\n");
}

int isEmpty(){
    return front==NULL;
}

#endif