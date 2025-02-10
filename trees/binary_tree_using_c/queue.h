#ifndef queue_h
#define queue_h

struct node{
    struct node *lchild;
    struct node *rchild;
    int data;
};


struct queue{
    int size;
    int front;
    int rear;
    node **Q;
};

void create(struct queue *q, int size){
    q->size=size;
    q->front=q->rear=0; //size should start from 0
    q->Q=(node **)malloc(q->size*sizeof(node *));
    
}

void enqueue(struct queue *q, node * x){
    if((q->rear+1)%q->size==q->front){ // queue full condition in circular queue
        printf("Queue is full\n");
    }else{
        q->rear=(q->rear+1)%q->size; // moving the rear
        q->Q[q->rear]=x;
    }
}

node * dequeue(struct queue *q){
    node* x=NULL;
    if(q->front==q->rear){
        printf("Queue is empty\n");
    }else{
        q->front=(q->front+1)%q->size;
        x=q->Q[q->front];
    }
    return x;
}

int isEmpty(struct queue q){
    return q.front==q.rear;
}

#endif