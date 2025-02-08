#include <iostream>
#include <stdio.h>
#include <stdlib.h>


using namespace std;

struct queue{
    int size;
    int front;
    int rear;
    int *Q;
};

void create(struct queue *q, int size){
    q->size=size;
    q->front=q->rear=-1;
    q->Q=(int *)malloc(q->size*sizeof(int));
    
}

void enqueue(struct queue *q, int x){
    if(q->rear==q->size-1){
        printf("Queue is full\n");
    }else{
        q->rear++; // moving the rear
        q->Q[q->rear]=x;
    }
}

int dequeue(struct queue *q){
    int x=-1;
    if(q->front==q->rear){
        printf("Queue is empty\n");
    }else{
        q->front++;
        x=q->Q[q->front];
    }
    return x;
}

void display_queue(struct queue q){
    for(int i=q.front+1;i<=q.rear;i++){
        printf("%d ",q.Q[i]);
    }
    printf("\n");
}

int main()
{
    struct queue q;
    create(&q,5);
    enqueue(&q,13);
    enqueue(&q,14);
    enqueue(&q,15);
    display_queue(q);
    
    printf("Deleted element = %d\n", dequeue(&q));
    display_queue(q);

    return 0;
}