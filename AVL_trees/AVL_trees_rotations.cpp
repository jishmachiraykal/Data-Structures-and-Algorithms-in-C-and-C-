#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct node{
    struct node *lchild;
    int data;
    int height; // to get the balance factor
    struct node *rchild;
}*root=NULL;

int nodeHeight(struct node *p){
    int hl,hr; // height of left subtree and right subtree
    hl=p && p->lchild?p->lchild->height:0;
    hr=p && p->rchild?p->rchild->height:0;
    return hl>hr?hl+1:hr+1;
}

int balanceFactor(struct node *p){
    int hl,hr; // height of left subtree and right subtree
    hl=p && p->lchild?p->lchild->height:0;
    hr=p && p->rchild?p->rchild->height:0;
    
    return hl-hr;
}


struct node * LLRotation(struct node *p){
    struct node *pl=p->lchild; // p's left lchild
    struct node *plr=pl->rchild;
    
    pl->rchild=p;
    p->lchild=plr;
    
    p->height=nodeHeight(p);
    pl->height=nodeHeight(pl);
    if(root==p){
        root=pl;
    }
    return pl;
}

struct node * LRRotation(struct node *p){
    struct node *pl=p->lchild; // p's left lchild
    struct node *plr=pl->rchild;
    
    pl->rchild=plr->lchild;
    p->lchild=plr->rchild;
    
    plr->lchild=pl;
    plr->rchild=p;
    
    p->height=nodeHeight(p);
    pl->height=nodeHeight(pl);
    plr->height=nodeHeight(plr);
    
    if(root==p){
        root=plr;
    }
    return plr;
}

struct node * RRRotation(struct node *p){
    return NULL;
}

struct node * RLRotation(struct node *p){
    return NULL;
}

struct node *RInsert(struct node *p, int key){
    struct node *t=NULL;
    if(p==NULL){
        t=(struct node *)malloc(sizeof(struct node));
        t->data=key;
        t->height=1;
        t->lchild=t->rchild=NULL;
        return t;
    }
    
    if(key<p->data){
        p->lchild=RInsert(p->lchild,key);
    }else if(key>p->data){
        p->rchild=RInsert(p->rchild,key);
    }
    p->height=nodeHeight(p);
    
    if(balanceFactor(p)==2 && balanceFactor(p->lchild)==1){ // condition for LL rotation
        return LLRotation(p);
    }else if(balanceFactor(p)==2 && balanceFactor(p->lchild)==-1){ // condition for LR rotation
        return LRRotation(p);
    }else if(balanceFactor(p)==-2 && balanceFactor(p->rchild)==-1){ // condition for RR rotation
        return RRRotation(p);
    }else{ // condition for RL rotation
        return RLRotation(p);
    }
    return p;
}

int main()
{
    root=RInsert(root,10);
    RInsert(root,5);
    RInsert(root,2);
    
    // put the breakpoint to see the rotation

    return 0;
}