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

*   2. Infix to postfix conversion:
        1. Infix: operand operator operand = a+b
        2. Prefix: operator operand operand = +ab
        3. Postfix: operand operand operator = ab+

* Postfix form allows us to perform a single scan and do all the operation which is not possible in infix.If the precedences are same, take from left to right

* Converting infix to prefix: Parenthesise the expression first which is having the higher precedence
    Ex: a)a+b*c=(a+(b*c))=(a+[*bc])=+a*bc
        b)a+b+c*d=(a+b+(c*d))=(a+b+[*cd])=+[ab]+[*cd]=++ab*cd

* Converting infix to postfix: Parenthesise the expression first which is having the higher precedence
    Ex: a)a+b*c=(a+(b*c))=(a+[bc*])=abc*+
        b)a+b+c*d=(a+b+(c*d))=(a+b+[cd*])=([ab+]+[cd*])=ab+cd*+

* Associativity: the order in which the operations are performed(L-R or R-L). If the expression is having same precedence, then it should be we are parenthesised based on associativity

* Power(^), pointer(*), fact(!),log x(operator is log here) and nagation(~) i.e.,unary operators associativity is from R-L

* Infix to postfix using stack: If it is an operator push it to stack and before pushing check what are operators present in stack.If the operator in the stack is lower precendence, then push the operator to stack otherwise pop out if it is equal/greater than. If we are pushing operands in the stack, it works correctly. But operands should be of higher precedence than any other operator

* If we get any closing bracket while evaluating expression with opening bracket in stack where the precedence is same, so add it to the postfix. Just pop out and ignore it and move to next symbol

* The in stock precedence is nothing where the L-R associativity will increase by one inside stack and R-L associativity decrease by one inside stack

* Time taken for the postfix expression evaluation is o(n)

* Precedence and associativity are meant for parenthesis and they will not decide which operator should execute first i.e., not for execution

