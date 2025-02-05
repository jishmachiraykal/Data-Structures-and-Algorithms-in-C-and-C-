//c++ class for linked list:
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <math.h> //power function available in this library

using namespace std;

class node{
    public:
    int data;
    node *next;
};

class linkedList{
    private:
        node *first;
    public:
        linkedList(){ //non-parameterized constructor
            first=NULL;
        }

        linkedList(int A[], int n);
        ~linkedList();

        void display();
        void insert(int index, int n);
        int delete_data(int index);
        int length();
};

linkedList::linkedList(int A[],int n)
{
    node *last,*t;
    int i=0;

    first=new node;
    first->data=A[0];
    first->next=NULL;
    last=first;

    for(i=1;i<n;i++)
    {
    t=new node; 
    t->data=A[i];
    t->next=NULL;
    last->next=t;
    last=t;
}
}

linkedList::~linkedList()
{
    node *p=first;
    while(first)
    {   
        first=first->next;
        delete p;
        p=first;
    }
}

void linkedList::display()
{

    node *p=first;
    while(p)
    {
    cout<<p->data<<" ";
    p=p->next;
}
    cout<<endl;
}

int linkedList::length()
{
    node *p=first;
    int len=0;

    while(p)
    {
        len++;
        p=p->next;
    }
    return len;
}

void linkedList::insert(int index,int x)
{
    node *t,*p=first;

    if(index <0 || index > length())
        return;
    t=new node;
    t->data=x;
    t->next=NULL;
    if(index==0)
    {
    t->next=first;
    first=t;
    }else{
        for(int i=0;i<index-1;i++)
            p=p->next;
            t->next=p->next;
            p->next=t;
    }
}

int linkedList::delete_data(int index)
{
    node *p,*q=NULL;
    int x=-1;

    if(index < 1 || index > length())
        return -1;

    if(index==1)
    {
        p=first;
        first=first->next;
        x=p->data;
        delete p;
    }else{
        p=first;
    for(int i=0;i<index-1;i++){
        q=p;
        p=p->next;
    }

    q->next=p->next;
    x=p->data;
    delete p;
}
    return x;
}

int main()
{
    int A[]={1,2,3,4,5};
    linkedList l(A,5);
    
    l.insert(3,10);
    l.display();

    cout<<l.delete_data(2)<<endl;
    cout<<l.length()<<endl;
    l.display();

    return 0;
}
