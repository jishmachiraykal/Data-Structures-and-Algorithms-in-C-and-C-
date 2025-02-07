#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

class node{// definition of node for linked list
public:
    int data;
    node *next;
};

class stack{
private:
    node* top;
public:
    stack(){
        top=NULL;
    }
    void push(int x);
    int pop();
    void display();
};

void stack::push(int x){
    node *t=new node;
    
    if(t==NULL){ // if t is not created then t will be NULL, so stack is full
        cout<<"Stack is full";
    }else{
        t->data=x;
        t->next=top;
        top=t;
    }
}

int stack::pop(){
    node *t=new node;
    int x=-1;
    if(top==NULL){ //checking if stack is empty
        cout<<"Stack is empty";
    }else{
        t=top;
        top=top->next;
        x=t->data;
        delete t;
    }
    return x;
}

void stack::display(){
    node *p=new node;
    p=top;
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}

int main(){
    stack stk;
    
    stk.push(13); // since top is a global variable so no need to pass anything here
    stk.push(14);
    stk.push(17);
    stk.push(20);
    
    stk.display();
    cout<<"Deleted data is "<<stk.pop();
}