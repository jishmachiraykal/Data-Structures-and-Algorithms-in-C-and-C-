#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

struct node{
    int coefficient;
    int exponent;
    struct node *next; // pointer to next node
}*polynomial=NULL;

void create(){
    struct node *t,*last=NULL;
    int num,i;
    
    printf("Enter number of terms: ");
    scanf("%d",&num);
    printf("Enter the terms with coefficient and exponent: ");
    
    for(i=0;i<num;i++){
        t=(struct node *)malloc(sizeof(struct node));
        scanf("%d%d",&t->coefficient,&t->exponent);
        t->next=NULL;
        if(polynomial==NULL){
             polynomial=last=t;
        }else{
            last->next=t;
            last=t;
        }
    }
}

void display(struct node *p){
    while(p!=NULL){
        printf("%dx%d+", p->coefficient,p->exponent);
        p=p->next;
    }
    printf("\n");
}

int evalPolynomial(struct node *p,int x)
{
    int sum=0;
 
    while(p)
    {
        sum+=p->coefficient*pow(x,p->exponent);
        p=p->next;
    }
    return sum;
}

int main(){
    create();
    printf("%d\n",evalPolynomial(polynomial,1));
    display(polynomial);
}