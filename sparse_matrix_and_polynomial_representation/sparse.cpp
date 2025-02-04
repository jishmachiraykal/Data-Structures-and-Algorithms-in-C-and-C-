//create, display and add sparse matrix:
#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

struct element{
    int i;
    int j;
    int x;
};

struct sparse{
    int m;
    int n;
    int no; // no.of non-zero elements
    struct element *e;
};

void create(struct sparse *s){

    int i;

    printf("Enter dimensions: ");
    scanf("%d%d",&s->m,&s->n);
    printf("Enter no.of non-zero elements: ");
    scanf("%d",&s->no);

    // creating an array of non-zero elements size i.e., no
    s->e=(struct element *)malloc(s->no*sizeof(struct element));
    printf("Enter all the non-zero elements");
    for(int i=0;i<s->no;i++){ // reading the non-zero elements entered
        scanf("%d%d%d", &s->e[i].i,&s->e[i].j,&s->e[i].x);
    }
}

void display(struct sparse s){
    int i,j,k=0;
    for(i=0;i<s.m;i++){
        for(j=0;j<s.n;j++){
            if(i==s.e[k].i && j==s.e[k].j){
                printf("%d ",s.e[k++].x); // k++, moving to next element
            }else{
                printf("0 ");
            }
        }
        printf("\n");
    }
}

struct sparse * add(struct sparse *s1,struct sparse *s2){
        int i,j,k=0;
        i=j=k=0;
        struct sparse *sum; //pointer type object
        sum=(struct sparse *)malloc(sizeof(struct sparse));
        sum->e=(struct element *)malloc((s1->no+s2->no)*sizeof(struct element));

        while(i<s1->no && j<s2->no){
            if(s1->e[i].i<s2->e[j].i){
                sum->e[k++]=s1->e[i++];
            }else if(s1->e[i].i>s2->e[j].i){
                sum->e[k++]=s2->e[j++];   
            }else{
             if(s1->e[i].j<s2->e[j].j){
                    sum->e[k++]=s1->e[i++];
                }else if(s1->e[i].j>s2->e[j].j){
                    sum->e[k++]=s2->e[j++];
                }else{
                    sum->e[k]=s1->e[i];
                    sum->e[k++].x=s1->e[i++].x+s2->e[j++].x;
                }
            }
        }
        for(;i<s1->no;i++) sum->e[k++]=s1->e[i];
        for(;j<s2->no;j++) sum->e[k++]=s2->e[j];

        sum->m=s1->m; // sum should be equal to any of the matrix sum
        sum->n=s1->n;
        sum->no=k; // no.of non-zero elements will be listed in k. Hence assigning it to no
        return sum;
}

int main() {
    struct sparse s1,s2,*s3; 
    create(&s1);
    create(&s2);
    s3=add(&s1,&s2);

    printf("First matrix: ");
    display(s1);

    printf("Second matrix: ");
    display(s2);
    printf("Display matrix\n");
    display(*s3);

    return 0;
}