#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct node{
    struct node *lchild;
    int data;
    struct node *rchild;
}*root=NULL; // initially nothing will be there in BST, here root is globallay accessible

void insert(int key){
    struct node *t=root;
    struct node *r=NULL,*p; // r is tail pointer of t and p is to create a new node

    if(root==NULL){
        p=(struct node*)malloc(sizeof(struct node)); // creating a new node to insert the data
        p->data=key;
        p->lchild=p->rchild=NULL;
        root=p; // root should be pointing to p after creating the first node
        return; // once it has inserted the first node, it should stop
    }
    while(t!=NULL){
        r=t; // r is a tail pointer of t here. r will be pointing on the location where we have to insert
        if(key<t->data){
            t=t->lchild;
        }else if(key>t->data){
            t=t->rchild;
        }else{
            return;
        }
    }
    // creating a new node to insert the element where r is pointing
    p=(struct node*)malloc(sizeof(struct node)); // creating a new node to insert the data
    p->data=key;
    p->lchild=p->rchild=NULL;
    
    if(key<r->data){
        r->lchild=p;
    }else{
        r->rchild=p;
    }
}

// inorder traversal gives sorted list of elements, so hence we can confirm the BST creation
void inorder(struct node *p){
    if(p){ // if p is not equal to NULL
        inorder(p->lchild);
        printf("%d ",p->data);
        inorder(p->rchild);
    }
}

struct node * search(int key){ // should return a node where the key value is found
    struct node *t=root;
    
    while(t!=NULL){
        if(key==t->data){
            return t;
        }else if(key<t->data){
            t=t->lchild;
        }else{
            t=t->rchild;
        }
    }
    return NULL; // return NULL if key is not found in tree
}

int main()
{
    struct node *temp; // to take search result as it will return structure pointer
    
    insert(10);
    insert(5);
    insert(15);
    insert(8);
    insert(25);
    
    inorder(root);
    printf("\n");
   
    temp=search(17);
    if(temp!=NULL){
        printf("Key %d is found", temp->data);
    }else{
        printf("Key not found");
    }
    
    return 0;
}