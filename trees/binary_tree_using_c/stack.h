#include "queue.h"
#ifndef stack_h
#define stack_h
using namespace std;

struct stack{
    int size;
    int top;
    struct node **s; // array for storing elements
};

void stackCreate(struct stack *st, int size){
    printf("Enter the size of the stack: ");
    scanf("%d",&st->size);
    st->top=-1; // initializing the top with -1
    st->s=(struct node **)malloc(st->size*sizeof(struct node *)); // creating a stack with the size given from user
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

struct node *pop(struct stack *st){
    struct node *x=NULL; // initializing to -1, so if stack is empty it atleast returns -1 indicating stack if empty
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

int isEmptyStack(struct stack st){
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

#endif