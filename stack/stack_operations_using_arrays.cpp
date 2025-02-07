#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

struct stack{
    int size;
    int top;
    int *s; // array for storing elements
};

void create(struct stack *st){
    printf("Enter the size of the stack: ");
    scanf("%d",&st->size);
    st->top=-1; // initializing the top with -1
    st->s=(int *)malloc(st->size*sizeof(int)); // creating a stack with the size given from user
}

void display(struct stack st){ // call by value as it is not modifying anything
    for(int i=st.top;i>=0;i--){
        printf("%d ",st.s[i]);
    }
    printf("\n");
}

void push(struct stack *st, int x){
    if(st->top==st->size-1){ // checking if stack is full or not
        printf("Stack overflow\n");
    }else{
        st->top++; // incrementing the array to move to next position
        st->s[st->top]=x;
    }
}

int pop(struct stack *st){
    int x=-1; // initializing to -1, so if stack is empty it atleast returns -1 indicating stack if empty
    if(st->top==-1){
        printf("Stack underflow\n");
    }else{
        x=st->s[st->top];
        st->top--;
    }
    return x;
}

int peek(struct stack st, int index){
    int x=-1;
    if(st.top-index+1<0){ //checking if the given index is valid
        printf("Invalid index\n");
        
    }else{
        x=st.s[st.top-index+1];
    }
    return x;
}

int isEmpty(struct stack st){
    if(st.top==-1){
        return 1; // returning true
    }else{
        return 0;
    }
}

int isFull(struct stack st){
    if(st.top==st.size-1){
        return 1; // returning true
    }else{
        return 0;
    }
}

int stackTop(struct stack st){
    if(!isEmpty(st)){ // checking if stack is not empty
        return st.s[st.top];
    }
    return -1;
}

int main(){
    struct stack st;
    create(&st);
    push(&st,10);
    push(&st,12);
    push(&st,13);
    push(&st,16);
    push(&st,18);
    
    printf("Element at index is %d\n", peek(st,1));
    printf("%d\n", isEmpty(st));
    printf("%d\n", isFull(st));
    printf("Top most element is %d\n", stackTop(st));
    display(st);
    
    printf("Deleted element is %d\n",pop(&st));
    display(st);
}