* If a function is calling itself then it is called recursive function. Inside the function it should have some condition so that it should stop the function from getting to execute again and again infinitely

* After the execution of final function call, it goes back its previous call and again its previous call till how many ever times it is called. Finally comes out of func call, then execution goes back to main function. This is tree and this is called tracing tree of recursive function

* In recursive function,if something is there before function call, then that will be executed during calling time and If something is there after function call and also if some computation made to function call, then that will be executed during returning time.Example for this could be go to next room and switch on the bulb and vice-versa

* Loops will have ascending phase, but recusion will have both ascending and descending phase. That is the difference between them

* For n function call, there will be n+1 activation calls created= o(n). Hence it consumes memory, so recursive functions are memory consuming functions

* Activation record created for ascending and descending call are same

* Recursion will internallyu use stack as it is calling the function again and again

* Static members are created inside code section

* Types of recursion:
        1.Tail recursion
        2. Head recursion
        3. Tree recursion
        4.Indirect recursion
        5.Nested recursion

* Tail recursion: If the recursive function is calling itself and that recursive call is the last statement in a function, there it is called tail recursion

* Here operations will be performed during calling time and function will not perform anything during returning time

* If it is fun(n-1) +n, then it is not tail recursion because tail recursion will not perform anything during returning time

* Time taken by recursive function and recursion using loop is same

* Recursive function utilizes stack and take n o(n) activation record but loops creates only one activation record o(1)

* In case of tail recursion, loops is more efficient

* Head recursion means function doesn't have to do any operation while calling it has to do everything only at the time of returning

* Head recursion cannot be easily converted to loop or anything which will process the value at the time of returning then it cannot be converted easily to get the same value as that of head recursive function

* Linear recursion is if the function is calling only one time.

* Tree recursion: If a function is called multiple times

* Activation record created as many as calls made

* Number of calls made can be calculated by (2^n+1)-1 = o(2^n)

* Space for n calls = n+1 = o(n)

* Indirect function: one function is calling another function. func A is calling func B, func B is calling func C and func C is called func A

* Nested recursion: Recursive call is taking recursive call inside it. fun(fun(n-1)). This is callled nested recursion

* For the recursive function we should have more than 1 value i.e., for large number of values and small number of values
```
        sum(n) = 1+2+3----------+(n-1)+n;
        sum(n) = sum(n-1) +n //1+2+3----(n-1) = sum(n-1)

        therefore sum(n)=sum(n-1)+n when n>0
        sum(n)=0, when n=0;
```

* Loops takes less time than recursion, but here we need to pass some logic and do some operation

* Factorial using recursion:
```
        fact(n) = 1*2*3*-------*(n-1)*n
        fact(n) = fact(n-1)*n; when n>0 and 1 when n =0;
```

* If you give negative number as n for factorial finding, then it continues calling function again and again. At last stops due to stack overflow. So a condition needs to be added to avoid such errors

* Exponent/Power: m^n means m should be multiplied n times. 2^3= 2*2*2;
```
        pow(m,n) = m*m*m*---------------*(n-1) times*m;
        pow(m,n)=pow(m,n-1)*m; when n>0 and 1 when n=0
```

* In recursion for n times, it makes n+1 calls and has n+1 activation record. It consumes more space in stack

* Reducing the no.of computation:
```
        2^8 can be written as (2^2)4 = (2*2)^4 //since it is odd directly doing it
        2^9=2*(2^2)^4 //since the number is odd taking one 2 out and doing the computation
```

* In Taylor series 3 values are involved: sum, power and factorial
```
e^x = 1+x^1/1 + x^2/2! + x^3/3! + ------ + n;
sum(n)= sum(n-1)+n;
fact(n)= fact(n-1)*n;
pow(m,n)= pow(m,n-1)*m;
```

* Addition is done at the returning time. Same in factorial and power

* When we have to return multiple values in recursion then we have to use static values

* Total multiplication required for n terms in Taylor series evaluation is n(n+1). o(n2) multiplication is required

* If take common and do the operation for n terms it requires n multiplication = o(n)

* fib(n-2)+fin(n-1) can be written as 2 fib(n-1). When a function is called 2 times with a reduced value, then the time taken is approx o(2^n)

* In Fibonacci series, recursive function is called multiple times for the same value, such a recursive function is called as excessive recursion

* To avoid excessive calls to avoid multiple function call, we have to make use of array i.e., storing the result of function so that it can be used later. This approach memoization

* nCr = n!/r!(n-r)! Where, r can take the value from 0-5. nCr is basically different ways of arranging values from large set of values

* From Pascal's triangle we can find out the values of nCr

* Tower of Hanoi: 2 conditions
                1. Moving one disk at a time 
                2. Smaller disk should not be kept over a larger disk

* TOH: Moving 3 disks from A to C using auxillary B
                1. Move disk 1 from A to C
                2. Move disk 2 from A to B
                3.Move disk 1 from C to B
                4. Move disk 3 from A to C using B
                5. Move disk 1 from B to A
                6. Move disk 2 from B to C
                7. Move disk 1 from A to C
Hence, C has disk 1,2,3 arranged from large to small( from bottom to top) by moving only one disk at a time

```
TOH(3, A,B,C)
1. TOH(2,A,C,B)

2.Move disk from A to C using B
3. TOH(2,B,A,C)

Therefore, for n disks
1. TOH(n-1,A,C,B)

2.Move disk from A to C using B
3. TOH(n-1,B,A,C)
```

* For 3 disks, it is making 15 calls. 1+2+2^2+2^3=2^4-1(2^n+1-1). For n=2, 7 calls. Time taken= o(2^n)

* If the variable is static, declaration will be called once and need to consider it during recursion call again and again

* Since this function is call by value, changing sum val in foo, doesn't change main function value. So sum will remain 0

* If it is call by reference, don't write the 5, write x only. Because x is referring to 5 here

* If the variables are local, in every call x value will be assigned with same value which was assigned to it before

* If there are many function calls, don't go for tree expansion. That would be complex. Make table and solve one by one and combine the result

