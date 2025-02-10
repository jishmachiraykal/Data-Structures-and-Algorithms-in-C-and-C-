#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "queue.h"
#include "stack.h"

struct node *root=NULL;

void createTree(){
    struct node *p,*t;
    int x;
    struct queue q;
    create(&q,100);
    
    printf("Enter root value: ");
    scanf("%d",&x);
    
    root=(struct node *)malloc(sizeof(struct node));
    root->data=x;
    root->lchild=root->rchild=NULL;
    enqueue(&q,root);
    
    while(!isEmpty(q)){
        p=dequeue(&q);
        printf("Enter left child %d: ", p->data);
        scanf("%d",&x);
        
        if(x!=-1){
            t=(struct node *)malloc(sizeof(struct node));
            t->data=x;
            t->lchild=t->rchild=NULL;
            p->lchild=t;
            enqueue(&q,t);
        }
        printf("Enter right child of %d: ", p->data);
        scanf("%d",&x);
        
        if(x!=-1){
            t=(struct node *)malloc(sizeof(struct node));
            t->data=x;
            t->lchild=t->rchild=NULL;
            p->rchild=t;
            enqueue(&q,t);
        }
    }
}

void preorder(struct node *p){
    if(p){
        printf("%d ", p->data);
        preorder(p->lchild);
        preorder(p->rchild);
    }
}

void Inorder(struct node *p){
    if(p){
        Inorder(p->lchild);
        printf("%d ", p->data);
        Inorder(p->rchild);
    }
}

void postorder(struct node *p){
    if(p){
        postorder(p->lchild);
        postorder(p->rchild);
        printf("%d ", p->data);
    }
}

void Ipreorder(struct node *p){
    struct stack stk;
    stackCreate(&stk,100);
    
    while(p || !isEmptyStack(stk)){
        if(p){
            printf("%d ", p->data);
            push(&stk,p);
            p=p->lchild;
        }else{
            p=pop(&stk);
            p=p->lchild;
        }
    }
}

void IInorder(struct node *p){
    struct stack stk;
    stackCreate(&stk,100);
    
    while(p || !isEmptyStack(stk)){
        if(p){
            push(&stk,p);
            p=p->lchild;
        }else{
            p=pop(&stk);
            printf("%d ", p->data);
            p=p->lchild;
        }
    }
}

void levelOrder(struct node *root){
    struct queue q;  // queue of node type
    create(&q,100);
    
    printf("%d ",root->data);
    enqueue(&q,root);
    
    while(!isEmpty(q)){
        root=dequeue(&q);
        if(root->lchild){
            printf("%d ",root->lchild->data);
            enqueue(&q,root->lchild);
        }
        if(root->rchild){
            printf("%d ",root->rchild->data);
            enqueue(&q,root->rchild);
        }
    }
}

int main(){
    createTree();
    printf("\n Pre order: ");
    preorder(root);
    printf("\n Post order: ");
    postorder(root);
    printf("\n In order: ");
    Inorder(root);
}