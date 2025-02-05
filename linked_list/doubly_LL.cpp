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

int main()
{
    int A[]={12,34,56,77,98};

    create(A,5);
    printf("Count = %d\n", count(first));
    display(first);

    return 0;
}
