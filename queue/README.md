* Queue is a logical data structure which works in FIFO(first in first out) discipline

* Elements are inserted at rear end and deleted at fron end

* Queue ADT
    1. Data: space for storing the elements, front for deletion and rear for insertion
    2. Operations: 
        a. Enqueue(x): inserting the element
        b. dequeue: deleting an element
        c. isEmpty: checking if the queue is empty or not
        d. isFull: checking if the queue is full or not
        e. first: knowing the first element in the queue
        f. last: knowing the last element in the queue

* Queue can be implemented using two data structures that are array and linked list

* In queue, insertion takes o(1) and deletion takes o(n) time complexity. Delete operation takes o(1) when using two pointers

* Queue is empty when front and rear are equal, therefore if(front==rear) and queue is full when if(rear==arr.size-1)

* In queue array, we cannot utilize the spaces deleted once. Every index can be used only once. And also sometimes queue is empty also full also. When both front and rear reaches last index

* Threfore in order to reuse the space there are 2 solutions:
    1. Resetting pointers: at any place if queue is becoming empty, then bring front and rear to beginning and make it -1. But this method 
                           does not guarantee re-use of spaces
    2. Circular queue: Wherever front is there, don't insert anything. Leave it there. Array is not circular, front and rear are circular.
                       This is done using mod(%) function i.e., rear=(rear+1)%arr.size and front=(front+1)%arr.size. Time for both enqueue and
                       dequeue operations on circular queue is o(1)/constant. This is the recommended way to implement queue in array, so space is
                       reused

* Queue using LL: if(front==NULL), then queue is empty and node *t=new node if(t==NULL) i.e., t is NULL then queue is full 

* When first node is created, both front and rear should point on the same node. When are new node is inserted rear should point on that node even if it is insertion is done at the last or in the beginning. This takes o(1)/conastant time and deleting node also takes constant/o(1) time