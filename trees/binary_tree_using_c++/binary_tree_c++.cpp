#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "queue_cpp.h"

class tree{
private:
    node *root;
public:
    tree(){
        root=NULL;
    }
    void createTree();
    void preorder(){preorder(root);}
    void preorder(node *p);
    void Inorder(){Inorder(root);}
    void Inorder(node *p);
    void postorder(){postorder(root);}
    void postorder(node *p);
    void levelorder(){levelorder(root);}
    void levelorder(node *p);
    int height(){return height(root);}
    int height(node *root);
};

void tree::createTree(){
    node *p,*t;
    int x;
    queue q(100);
    
    printf("Enter root value: ");
    scanf("%d",&x);
    
    root=new node;
    root->data=x;
    root->lchild=root->rchild=NULL;
    q.enqueue(root);
    
    while(!q.isEmpty()){
        p=q.dequeue();
        printf("Enter left child %d: ", p->data);
        scanf("%d",&x);
        
        if(x!=-1){
            t=new node;
            t->data=x;
            t->lchild=t->rchild=NULL;
            p->lchild=t;
            q.enqueue(t);
        }
        printf("Enter right child of %d: ", p->data);
        scanf("%d",&x);
        
        if(x!=-1){
            t=new node;
            t->data=x;
            t->lchild=t->rchild=NULL;
            p->rchild=t;
            q.enqueue(t);
        }
    }
    
}

void tree::preorder(struct node *p){  // for n calls, 2n+1 calls are done, size of stack is height+2. Time complexity is o(n)
    if(p){
        printf("%d ", p->data);
        preorder(p->lchild);
        preorder(p->rchild);
    }
}

void tree::Inorder(struct node *p){ // for n calls, 2n+1 calls are done, size of stack is h+2(o(h)). Time complexity is o(n)
    if(p){
        Inorder(p->lchild);
        printf("%d ", p->data);
        Inorder(p->rchild);
    }
}

void tree::postorder(struct node *p){
    if(p){
        postorder(p->lchild);
        postorder(p->rchild);
        printf("%d ", p->data);
    }
}

void tree::levelorder(struct node *p){
 
    queue q(100);
    printf("%d ",root->data);
    q.enqueue(root);
    while(!q.isEmpty()){
        root=q.dequeue();
        if(root->lchild){
        printf("%d ",root->lchild->data);
        q.enqueue(root->lchild);
    }
        if(root->rchild)
        {
        printf("%d ",root->rchild->data);
        q.enqueue(root->rchild);
        }
    }
}
        
int tree::height(struct node *root)
{
 
        int x=0,y=0;
        if(root==0)
        return 0;
        x=height(root->lchild); y=height(root->rchild);
        if(x>y)
        return x+1;
        else
        return y+1;
}

int main(){
    tree t;
    t.createTree();
    printf("\n Pre order: ");
    t.preorder();
    printf("\n Post order: ");
    t.postorder();
    printf("\n In order: ");
    t.Inorder();
}