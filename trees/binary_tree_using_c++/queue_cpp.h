#ifndef queue_cpp_h
#define queue_cpp_h

using namespace std;

class node{
public:
    node *lchild;
    node *rchild;
    int data;
};

class queue{
private:
    int size;
    int front;
    int rear;
    node **Q;
public:
    queue(){
        front=rear=-1;
        size=10;
        Q=new node*[size];
    }
    queue(int x){
        front=rear=-1;
        this->size=size;
        Q=new node*[this->size];
    }
    void enqueue(node *x);
    node* dequeue();
    void display_queue();
    int isEmpty(){
        return front==rear;
    }
};

void queue::enqueue(node *x){
    if(rear==size-1){
        cout<<"Queue is full";
    }else{
        rear++; // moving the rear
        Q[rear]=x;
    }
}

node* queue::dequeue(){
    node* x=NULL;
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

#endif