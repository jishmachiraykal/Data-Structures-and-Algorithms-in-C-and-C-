* Problem with arrays: Arrays are of fixed size, once given cannot be modified during run time

* Linked list: A variable (not fixed type) data structure which can be modified during runtime as per user requirement. This size can be increased or removed. So for this memory needs to be created during run time in heap and this needs to be linked to making it as a linked list

* A node will contain value and pointer to next element. Linked list is always created in heap and dynamically allocate the memory. For all the elements memory is allocated, if element is gone memory is gone. Therefore size is variable

* Linked list is a collection of nodes, where each node contains data and pointer to next node. Linked list is not contiguous unlike array. To define a node, 2 things are required (data and pointer/address to next node). Here pointer is of node data type
```
        struct node{ // a node contains 2 data members 1.data 2.pointer to next node

            int data;

            struct node *next; // here pointer next is of node type. Which itself is a node and pointing to next node

        }
```
These type of struct s called self-referential structure

* struct node *p, *q;
        1. q=p; // q will get the address of the p and pointing to same data pointed by p
        2. q=p->next; //p's next address will be pointed by q and q will point to the next node data. Simply it means let q point to next node of p     
        3.p=p->next; //Imp: let p move to the next node

* struct node *p=0; // p pointing to null (0). If the pointer is pointing to null then the below conditions will be true:
        1.if(p==NULL)
        2.if(p==0)
        3if(!p)
Checking if p is a last node or are there any nodes after p: if(p->next == NULL)

* Time taken for recursive display is o(n) and (n+1) activation records are created

* Mostly functions written on linked list takes time o(n) and space is o(1)/constant

* Binary search cannot be performed in the linked list because we cannot directly access the middle element. It has to be traversed

* Transposition: Moving the data to its previous location. This is not advisable in linked list because moving of nodes is done not the data. So, second method move to head can be performed

* In linked list we can start indices from any number. Usually starting with 1

* Time complexity for inserting before first node is o(1) and time complexity for inserting the data at a given position is max=o(n) and min=o(1)

* While inserting the data first index should be 0 and afterwards give valid index in order to create linked list

* If we are inserting every time at the last node, then it would be better to create last pointer and use it when needed

* If there is only one node, then both first and last should be on same node and if there is no node, then first and last should be null

* InsertLast function will work even if the linked list is empty and no invalid indices. Can also used for creating a linked list

*  Deleting from linked list has two cases: 1. delete the first node 2. Delete a node at given position

* After deleting the node, try to delete it because memory has created for that

* Using first we cannot delete a node, because address of the next node will be deleted. We should use extra pointer like p and delete it.

* Deleting a node doesn't mean throwing the data its taking out the value for some purpose. So store it in some variable for later uses. Time taken for deleting the node max is o(n) and min is o(1)

* Time taken =o(n) if the linked list is sorted. If the list is not sorted then min=o(1) and max=o(n)

* Time taken to remove duplicates from sorted linked list is always o(n)

* Reversing a linked list: 2 ways
        1. Interchanging the elements/ reversing the elements: Time taken=2n=o(n) always
        2.Reversing the links: Changing the address/links and making the last link as first

* In recursive function for reversing list, reversing will be done in the returning phase

* Concatenating takes o(n)

* Merging: Combining two sorted list into one sorted list. Merging in linked list does not take any extra space/arrays unlike arrays and time taken is theta(m+n)

* LOOP in linked list: If last node of a linked list is pointing to any node in the linked list. Otherwise, it is linear

* A linked list is linear if it is ending with NULL

* Finding if the linked list is loop: Taking two pointers and p moves to next nodes and q moves two times ahead of p. And if they meet somewhere again after starting pointer, then it has a loop. Time complexity is o(n), taking two pointers

* Circular linked list: collection of nodes circularly connected. There is no first node, so giving head to any of the node is sufficient. 

* Use case: when we want one directional access as well as bi-directional access, circular linked list is used

* If there is only one node, then it will point on itself and there is no node, then head will be NULL. Head can be pointed to any node, or it is given as a separate node. Then consider nodes, except head node. Because this is pointing to some address and not a node. Circular LL can be represented using any of these methods

* Circular linked list position:
        1. Insert before head 
        2. Insert at any other position: it takes min o(1) when inserting after first node and max o(n) inserting after the last node

* If we are inserting before head, and after insertion need not to move head to inserted node, like new node

* Deleting nodes in circular linked list: two cases
        1. Deleting head node 
        2. Deleting a node from given position

* Time taken to delete the head node is o(n) and time taken to delete the node at any other given position is o(1)

* Doubly linked list: node have access to next node as well as previous node. It is accessible bi-directionally
        Ex: Going to forward to multiple pages in a website and coming back

* Doubly linked list insertion: 
        1. Before first node: time taken is o(1)
        2. At any given node: time complexity min is o(1) and max is o(n)

* Doubly linked list deletion: 
        1. Delete first node: time taken is o(1)
        2. Delete from given node: time complexity min is o(1) and max is o(n)

* Reversing doubly linked list: Traverse through the list and swap it. All previous nodes will be reversed one by one and all next nodes are reversed one by one
