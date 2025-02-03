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

* 
