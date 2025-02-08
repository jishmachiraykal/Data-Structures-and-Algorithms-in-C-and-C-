#include <iostream>
#include <stdio.h>
#include <stdlib.h>


using namespace std;

class queue{
private:
    int size;
    int front;
    int rear;
    int *Q;
public:
    queue(){
        front=rear=-1;
        size=10;
        Q=new int[size];
    }
    queue(int x){
        front=rear=-1;
        this->size=size;
        Q=new int[this->size];
    }
    void enqueue(int x);
    int dequeue();
    void display_queue();
};

void queue::enqueue(int x){
    if(rear==size-1){
        cout<<"Queue is full";
    }else{
        rear++; // moving the rear
        Q[rear]=x;
    }
}

int queue::dequeue(){
    int x=-1;
    if(front==rear){
        cout<<"Queue is empty";
    }else{
        front++;
        x=Q[front];
    }
    return x;
}

void queue::display_queue(){
    for(int i=front+1;i<=rear;i++){
        cout<<Q[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    queue q(5);
    q.enqueue(13);
    q.enqueue(14);
    q.enqueue(15);
    q.display_queue();
    
    cout<<"Deleted element = "<<q.dequeue()<<endl;
    q.display_queue();

    return 0;
}