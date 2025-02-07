#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

struct node{ // definition of node for linked list
    char data;
    struct node *next;
}*top = NULL;

void push(char x){
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

char pop(){
    struct node *t;
    char x=-1;
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

int isBalanced(char *expression){
    int i;
    char x;
    for(i=0;expression[i]!='\0';i++){
        if(expression[i]=='(' || expression[i]=='{' || expression[i]=='['){ // checking if it a opening bracket to push into the stack
            push(expression[i]);
        }else if(expression[i]==')' || expression[i]=='}' || expression[i]==']'){ // checking if it a opening bracket to push into the stack
            if(top==NULL){ // checking if the stack is empty
                return 0;
            }else{
            x=pop();
            // here I need a piece of code which checks, the poped bracket is matching with its respective bracket  
            if((expression[i] == ')' && x != '(') ||
                   (expression[i] == '}' && x != '{') ||
                   (expression[i] == ']' && x != '[')){
                    return 0; // if not matching, return false
            }
            }
        }
    }
    if(top==NULL){ // if stack is empty, then parenthesis is matching
        return 1; 
    }else{
        return 0;
    }
}

int main(){
    char *expression="{[a+b+c]+d(e+f)}";
    
    printf("%d", isBalanced(expression));
}