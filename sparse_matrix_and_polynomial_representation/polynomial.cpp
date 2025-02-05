//creating, adding and displaying polynomial :
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <math.h> //power function available in this library

struct term{
    int coefficient;
    int exponent;
};

struct polynomial{
    int n; //no.of non-zero tems
    struct term *t;
};

void create(struct polynomial *p){
    printf("Enter number of non-zero tems: ");
    scanf("%d", &p->n);

    p->t=(struct term *)malloc(p->n*sizeof(struct term));

    printf("Enter all the terms: ");
    for(int i=0;i<p->n;i++){
        scanf("%d%d",&p->t[i].coefficient,&p->t[i].exponent);
    }
}

struct polynomial *add(struct polynomial *p1, struct polynomial *p2){
    struct polynomial *sum;
    int i,j,k;
    i=j=k=0;

    sum=(struct polynomial *)malloc(sizeof(struct polynomial));
    sum->t=(struct term *)malloc((p1->n+p2->n)*sizeof(struct term));

    while(i<p1->n && j<p2->n){
        if(p1->t[i].exponent > p2->t[j].exponent){
            sum->t[k++]= p1->t[i++];   
        }else if(p1->t[i].exponent < p2->t[j].exponent){
            sum->t[k++]= p2->t[j++];
        }else{
            sum->t[k].exponent = p1->t[i].exponent;
            sum->t[k++].coefficient = p1->t[i++].coefficient + p2->t[j++].coefficient;
        }
    }

    for(;i<p1->n;i++)sum->t[k++]=p1->t[i]; // copying if there are any elements remaining
    for(;j<p1->n;j++)sum->t[k++]=p2->t[j];

    sum->n=k;
    return sum;
}

void display(struct polynomial p){
    int i;
    for(i=0;i<p.n;i++){
        printf("%dx^%d+", p.t[i].coefficient,p.t[i].exponent);
    }
    printf("\n");
}

int main()
{
    struct polynomial p1,p2,*p3;
    create(&p1);
    create(&p2);
    p3=add(&p1,&p2);

    printf("First polynomial: \n");
    display(p1);

    printf("Second polynomial: \n");
    display(p2);

    printf("Third polynomial: \n");
    display(*p3);

    return 0;
}