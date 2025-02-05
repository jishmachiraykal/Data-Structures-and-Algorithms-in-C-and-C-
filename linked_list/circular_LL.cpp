//display circular linked list:
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct node{
    int data;
    struct node *next; // self-referential pointer
}*head;

void create(int A[], int n){
    int i;
    struct node *t,*last;

    // create first node and make it as head node
    head=(struct node *)malloc(sizeof(struct node));
    head->data=A[0];
    head->next=head; // making head pointing to itself
    last=head;

    for(i=1;i<n;i++){
        t=(struct node *)malloc(sizeof(struct node));
        t->data=A[i];
        t->next=last->next; // since this is circular, not making it as NULL
        last->next=t;
        last=t;
    }
}

void display(struct node *h){
    do{
        printf("%d ", h->data);
        h=h->next;
    }while(h!=head);
    printf("\n");
}

void Rdisplay(struct node *h){
    static int flag=0; // making static so this variable will not be created everytime in stack
    if(h!=head || flag==0){
        flag=1;
        printf("%d ", h->data);
        Rdisplay(h->next);
    }
    flag=0;
}

//insert for a circular linked list:
void insert(struct node *p, int index, int x){
    struct node *t;
    int i;

    if(index<0 || index>length(p))//checking if the given index is valid or not
        return;

    if(index==0){ // inserting before head
        t=(struct node *)malloc(sizeof(struct node));
        t->data=x;

        if(head==NULL){ // checking if there is already any nodes in linked list or not
            head=t;
            head->next=head;
        }else{
            while(p->next!=head){
                p=p->next;
            }
            p->next=t;
            t->next=head;
            head=t; // making t as head, not mandatory
        }

    }else{ // inserting at any given position
        for(i=0;i<index-1;i++){
            p=p->next;
        }
            t=(struct node *)malloc(sizeof(struct node));
            t->data=x;
            t->next=p->next;
            p->next=t;
    }
}

int length(struct node *p){
    int length=0;

    do{ // do while loop instead of while loop because of its different condition check in circular linked list
        length++;
        p=p->next;
    }while(p!=head);

    return length;
}

//delete for circular linked list:
int delete_node(struct node *p, int index){
    struct node *q;
    int i,x;   

    if(index<0 || index>length(p))
        return -1;

    if(index==1){ //deleting the head node
        while(p->next!=head){
            p=p->next;
        }

        x=head->data;
        if(head==p){ // checking if head is a last node
           free(head);
           head=NULL;

        }else{
            p->next=head->next;
            free(head);
            head=p->next;
        }
        }else{
        for(i=0;i<index-2;i++){
            p=p->next;
        }

        q=p->next;
        p->next=q->next;
        x=q->data;
        free(q);
    }   

    return x;
}

int main(){
    int A[]={2,4,6,8};

    create(A,4);
    display(head);

    create(A,4);
    insert(head,2,10);
    display(head);

    create(A,4);
    printf("%d\n",delete_node(head,2));
    display(head);

}