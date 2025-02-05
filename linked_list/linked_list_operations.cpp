//display program for linked list:
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <math.h> //power function available in this library

struct node{ // a node contains 2 data members 1.data 2.pointer to next node
    int data;
    struct node *next; // here pointer next is of node type. Which itself is a node and pointing to next node
}*first=NULL; // a global pointer to define the linked list

void create(int A[], int n){
    int i;
    struct node *t,*last; //*t= temporary pointer helps to create a node and *last= last node helping to
    // add new element in the last node
    first=(struct node *)malloc(sizeof(struct node));

    first->data=A[0];
    first->next=NULL;

    last=first;
    for(i=1;i<n;i++){ // starting from 1 because 0th element is already created
      t=(struct node *)malloc(sizeof(struct node));
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

void display(struct node *p){
    while(p!=NULL){
        printf("%d ", p->data);
        p=p->next;
    }
}

//recursive display for linked list:
void Rdisplay (struct node *p){ // recursive display function
    if(p!=NULL){
        printf("%d ",p->data);
        Rdisplay(p->next);
    }
}

//count and sum in linked list:
int count(struct node *p){
    int count=0;

    while(p){ // this will execute till p is true i/. p!=NULL
    count++;
    p=p->next;
    }
    return count;
}

int Rcount(struct node *p){
    if(p!=0){
        return Rcount(p->next)+1;
    }else{
        return 0;
    }
}

int add(struct node *p){
    int s=0;
    while(p!=NULL){
        s+=p->data;
        p=p->next;
    }
    return s;
}

int Radd(struct node *p){
    if(p!=0){
        return Radd(p->next)+p->data;
    }else{
        return 0;
    }
}

//finding maximum data in linked list:
int max(struct node *p){ // finding min can be written using same logic
    int max=-32768;// considering int takes 2 bytes of memory then least value is 32768 and comparing
    // it with other data. Since this is smallest no. anything otherthan this will be greater
    while(p){
        if(p->data>max){
            max=p->data;
            p=p->next;
        }
    }
    return max;
}

int Rmax(struct node *p){
    int x=0;

    if(p==0){
        return 0;
    }else{
        x=Rmax(p->next);
        if(x>p->data){
            return x;
        }else{
            return p->data;
        }
    }
}

//linear search using linked list:
struct node * LSearch(struct node *p, int key){ // linear search should return struct node as data type
  l  struct node *q=NULL;
    while(p!=0){
        if(key==p->data){
            q->next=p->next;
            p->next=first;
            first=p;
            return p; // p returns the key
        }
        q=p; //q is a tail of p
        p=p->next;
    }
    return NULL;
}

struct node * RLSearch(struct node *p, int key){
    if(p==NULL)
        return 0;
    if(key==p->data)
        return p;
    return RLSearch(p->next,key);
}

//insert code for linked list:
void insert(struct node *p, int index, int x){
    struct node *t;
    t=(struct node *)malloc(sizeof(struct node));
    t->data=x;

    if(index <0 || index >count(p)){ // first checking if given index is valid by taking the count function
    // and checking if it is exceeding the max count   
        return;
    }

    if(index == 0){
        t->next=first;
        first=t;
    }else{
        for(int i=0;i<index-1;i++){
            p=p->next;
        }
        t->next=p->next;
        p->next=t;
    }
}

//inserting in a sorted linked list:
void insert(struct node *p, int index, int x){
    struct node *t;

    t=(struct node *)malloc(sizeof(struct node));
    t->data=x;
    if(index <0 || index >count(p)){ // first checking if given index is valid by taking the count function
    // and checking if it is exceeding the max count   
        return;   
    }

    if(index == 0){
        t->next=first;
        first=t;
    }else{
        for(int i=0;i<index-1;i++){
            p=p->next;
        }
        t->next=p->next;
        p->next=t;
    }
}

//deleting a node from a list:
int deleteNode(struct node *p, int index){
    struct node *q=NULL;
    int x=-1;

    if(index<1 || index>count(p)){
        return -1;
    }

    if(index==1){
        q=first;
        x=first->data;//stroing the deleted data value for later uses
        first=first->next;
        free(q); // delete q
        return x;

    }else{
        for(int i=0;i<index-1;i++){
            q=p; //q is a tail pointer
            p=p->next;
        }

        q->next=p->next;
        x=p->data;
        free(p);
        return x;
    }
}

//checking if linked is sorted :
int isSorted(struct node *p){
    int x=-32768;

    while(p!=0){
        if(p->data<x){ // checking for false condition first, so don't have iterate if the linked list is not sorted
           return 0;
        }
        x=p->data;
        p=p->next;
    }

    return 1;
}

//remove duplicates from sorted LL:
void removeDuplicate(struct node *p){
    struct node *q=p->next; //here p is a tail of q

    while(q!=NULL){
        if(q->data != p->data){
            p=q;
            q=q->next;
        }else{
            p->next=q->next;
            delete q;
            q=p->next;
        }
    }
}

//reversing using interchanging the elements:
void reverse1(struct node *p){ // reversing the element method using array
    int *A,i=0;
    struct node *q=p;
    A=(int *)malloc(sizeof(int)*count(p));

    while(q!=NULL){
        A[i]=q->data; // copying data from linked list to array
        q=q->next;
        i++;
    }
    q=p;
    i--;

    while(q!=NULL){
        q->data=A[i];  // copying from array to linked list
        q=q->next;
        i--;
    }
}

//reversing using using changing the nodes i., sliding pointers:
void reverse2(struct node *p){ // using changing the nodes i., sliding pointers
    struct node *q=NULL,*r=NULL;

    while(p!=NULL){
        r=q;
        q=p;
        p=p->next;
        q->next=r; // changing the nodes
    }

    first=q; // first should point on q
}

//reversing using recursion in linked list:
void Rreverse3(struct node *q,struct node *p){
    if(p){
        Rreverse3(p,p->next);
        p->next=q;
    }else
        first=q;
}

//concatenation:
struct node { // a node contains 2 data members 1.data 2.pointer to next node
int data;
struct node *next; // here pointer next is of node type. Which itself is a node and pointing to next node
}*first=NULL,*second=NULL,*third=NULL; // a global pointer to define the linked list

void create2(int A[], int n) {
    int i;
    struct node *t,*last; //*t= temporary pointer helps to create a node and *last= last node helping to
// add new element in the last node
    second=(struct node *)malloc(sizeof(struct node));

    second->data=A[0];
    second->next=NULL;

    last=second;
    for(i=1; i<n; i++) { // starting from 1 because 0th element is already created
        t=(struct node *)malloc(sizeof(struct node));
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
}
}

void concatenate(struct node *p, struct node *q){
    third=p;
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=q;
}

//merging the linked list: Give input arrays in sorted order:
void merge(struct node *p, struct node *q){
    struct node *last;

    if(p->data < q->data){
        third = last = p;
        p=p->next;
        third->next=NULL;
    }else{
        third=last=q;
        q=q->next;
        third->next=NULL;
    }

    while(p!=NULL && q!=NULL){
        if(p->data < q->data){
            last->next=p;
            last=p;
            p=p->next;
            last->next=NULL;
            }else{
            last->next=q;
            last=q;
            q=q->next;
            last->next=NULL;
        }
    }

    if(p!=NULL)last->next=p;
    if(q!=NULL)last->next=q;
}

//checking if the linked list is loop:
int isLoop(struct node *f){
    struct node *p,*q;
    p=q=f;

    do{
        p=p->next;
        q=q->next;
        if(q!=NULL){
            q=q?q->next:q;
        }
    }while(p && q && p!=q);

    if(p==q){
        return 1;
    }else{
        return 0;
    }
}

int main()
{
    struct node *temp,*rtemp,*t1,*t2;;
    int A[]={12,23,24,38,90}; // creating an array to display linked list
    int B[]= {1,2,50,28,19};

    create(A,5);
    display(first);

    create(A,5);
    Rdisplay(first);

    create(A,5);
    printf("Total number of data is: %d\n",count(first));
    printf("Total number of data is: %d\n",Rcount(first));
    printf("Sum of data is: %d\n",add(first));
    printf("Sum of data is: %d\n",Radd(first));
    display(first);

    printf("Max of data is: %d\n",max(first));
    printf("Max of data is: %d\n",Rmax(first));
    display(first);

    create(A,5);
    temp=LSearch(first,23);
    if(temp){
        printf("Key is found at %d\n", temp->data);
    }else{
        printf("Key is not found\n");
    }

    rtemp=RLSearch(first,24);
    if(rtemp){
        printf("Key is found at %d\n", rtemp->data);
    }else{
        printf("Key is not found\n");
    }
    display(first);

    create(A,5);
    insert(first,5,45); // this function can also be used to create linked list e.g insert(0,10)
    display(first);

    create(A,5);
    sortedInsert(first,25); // this can also be used to create linked list
    display(first);

    create(A,5);
    printf("Deleted element is %d\n",deleteNode(first,5));
    display(first);

    create(A,5);
    if(isSorted){
        printf("Sorted\n");
    }else{
        printf("Not Sorted\n");
    }
    display(first);

    create(A,5);
    removeDuplicate(first);
    display(first);

    create(A,5);
    reverse1(first);
    display(first);

    create(A,5);
    reverse2(first);
    display(first);

    create(A,5);
    Rreverse3(NULL,first);
    display(first);

    create(A,5);
    create2(B,5);
    concatenate(first,second);
    printf("Concat result is:");
    display(third);

    create(A,5);
    create2(B,5);
    merge(first,second);
    printf("Merge result is:");
    display(third);

    create(A,5);
    t1=first->next->next; // pointing to third node
    t2=first->next->next->next->next; // pointing to fifth node
    t2->next=t1; // creating a loop
    printf("%d\n",isLoop(first));
    display(third);
    return 0;
}