* Stack is a collection of elements and their insertion and deletion is performed by LIFO(last in first out) discipline
    Ex: 1. Stack of plates
        2. To reverse the direction(in railway tracks)

* ADT of statck: This gives the definition of stack in terms of data representation and operation

* Operations on stack:
    1. Push(x): pushing a element into the stack
    2. Pop: popping the element from a stack
    3. Peek(index): seeing the element from a stack
    4. stacktop: knowing the top most value
    5. isEmpty: knowing the stack is empty or not
    6. isFull: knowing the stack is full or not

* Stack elements are stored in arrays and linked list

* Stack using array: for this we need 3 things
    1. Array
    2. Size of the array
    3. Top pointer

* Usually top will be initialized with -1 as array top elements starts from 0. Top will be moved to next index when elements are added

* Stack empty condition: if(top==1)

* Stack full condition: if(top==arr.size-1)

* Time taken to push and pop elements in the stack is constant/o(1)

* Using top pointer we can get index in an array.In order to peek elements, index can be obtained by index=top-position-1. Time taken for this is o(1)/constant

* Time taken by stack operations is o(1)/constant

* Stack using LL conditions
    1. Stack is empty if(top==NULL)
    2. Stack is full if heap is full and we are unable to create node

* Stack operations using LL:
    1. Push
    2. Pop
    3. Peek/Peep
    4. stackTop
    5. isEmpty
    6. isFull

* Stack applications:
    1. Parenthesis matching: Checking if parenthesis is matching in the expression. If there a opening bracket push to the stack and for closing bracket pop out from the stack. If there is any alphabet or symbols found ignore it. At last if the stack is empty and also if there is no closing bracket left, then parenthesis is matching otherwise it is not matching.

    This procedure doesn't check if the parenthesis is given in the correct format. It just checks it the number of parenthesis
