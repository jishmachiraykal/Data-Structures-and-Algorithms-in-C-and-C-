#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

struct node{ // definition of node for linked list
    int data;
    struct node *next;
}*top = NULL;

void push(int x){
    struct node *t;
    t=(struct node *)malloc(sizeof(struct node));
    
    if(t==NULL){ // if t is not created then t will be NULL, so stack is full
        printf("Stack is full\n");
    }else{
        t->data=x;
        t->next=top;
        top=t;
    }
}

int pop(){
    struct node *t;
    int x=-1;
    if(top==NULL){ //checking if stack is empty
        printf("Stack is empty\n");
    }else{
        t=top;
        top=top->next;
        x=t->data;
        free(t);
    }
    return x;
}

void display(){
    struct node *p;
    p=top;
    while(p!=NULL){
        printf("%d ", p->data);
        p=p->next;
    }
    printf("\n");
}

int main(){

    push(13); // since top is a global variable so no need to pass anything here
    push(14);
    push(17);
    push(20);
    
    display();
    printf("Deleted data is %d\n", pop());
}