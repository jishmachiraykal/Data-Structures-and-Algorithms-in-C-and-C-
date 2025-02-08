#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <cstring>

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

int precendence(char x){ // this function assignes the precendence value
    if(x=='+' || x=='-'){
        return 1;
    }else if(x=='*' || x=='/'){
        return 2;
    }else{
        return 0;
    }
}

int isOperand(char x){ // checks if it is operator or operand
    if(x=='+' || x=='-' || x=='*' || x=='/'){
        return 0;
    }else{
        return 1;
    }
}

char * inToPostfix(char *infix){
    int i=0,j=0;
    char *postfix;
    int len=strlen(infix);
    postfix=(char *)malloc((len+2)*sizeof(char)); //len+2 because we have to store \0 character also
    
    while(infix[i]!='\0'){
        if(isOperand(infix[i])){
            postfix[j++]=infix[i++];
        }else{
            if(precendence(infix[i])>precendence(top->data)){
                push(infix[i++]);
            }else{
                postfix[j++]=pop();
            }
        }
    }
    while(top!=NULL){
        postfix[j++]=pop();
    }
    postfix[j]='\0';
    return postfix;
}


int main(){
    char *infix="a+b*c-d/e";
    
    push('#'); // pushing some element so it does not throw error while checking precendence(top->data) for the first time
    
    char *postfix=inToPostfix(infix);
    printf("%s", postfix);
}