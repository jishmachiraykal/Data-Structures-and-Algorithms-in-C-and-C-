* Main memory has 3 sections: Code section, stack and heap

* Code section has program code.
    Variable created inside ex: an array will be stored in stack and can be accessed directly by code section

* Structure: Collection of similar/dissimilar data types    

* dot operator is used to access the structure member elements.
    struct rectangle r={10,15}
    r.length=15 --> dot operator

* Pointers are used to store the address of data

* Program will access code section and stack but will not access heap memory. So in order to access heap memory we need pointers. This is one of the reasons of using pointers

* Some other examples could be accessing hard disk, keyboards, monitors and network connection. All these are external to program

* Address variables are called as pointers. Ex: 
```
    int a =10;
    int *p; //declaration
    p=&a; //initialization
    printf("%d\n", p); --> print the address of a
    printf("%d\n", *p); //dereferencing , which gives output of 10
```

* Malloc is used to get heap memory and library for this is #include <stdlib.h>

* Dereferencing is going to the particular variable address and take the value

* Every pointer takes same amout of memory irrespective of its type (data type)

* Reference is only available in C++ and not part of C

```
int n=19;
int &r=n; // here r is a reference to n, which means we can call this with name n as well as with r
```

* Referencing is useful in parameter passing and can be used instead of pointers. Reference doesn't consume any memory unlike pointers

* Parameters passed to actual func is called formal parameters and pameters of called function is called actual parameters

* Activation record of function ends once it performs certain task and control comes back to main function. Functions have separate activation records

* Variables of one function cannot be accessed by another function

* In pass by value, any changes done to formal parameters(actual func) will not reflect in actual parameters

* Pass by value is used when we return value from function. Therefore pass by value is not suitable for swap function because swap will happen inside formal parameters and not reflect in main function

* In pass by reference when formal parameters are modified, actual parameters gets modified. Therefore it is suitable in tasks such as swapping of numbers

* In pass by reference, code of the function will be copied to the function call and it becomes part of the main function and holds only one activation record along with main. So it is not advisable to use pass by reference frequently so that whole function code gets copied to main and there is no use of having a separate function

* Arrays cannot be passed as value at all, it has to be passed as address. a[] means it is a pointer to an array

* Pass by address can modify the actual parameters

* We cannot use for each loop on array, therefore we should use for loop

* Array cannot be passed as value, it has to be passed by address. But structure having array can be pass by value

* Standard style in C is to have multiple functions performing certain tasks and all are referring to one structure. Main function doesn't do any task except function call and structure variable declaration

* It is a good practice to initialize variable even though you are taking input from user

* class can also be written as structure in C++

* Writing functions is C style programming and class is C++ style programming. Class is written when dealing with big program

* Constructor will not have return type. It may or may not take parameters

* Defining a destructor if there is dynamic memory allocation. Destructor will not have any return type
    ```
    Ex: ~Rectangle();// name of class
    ```

* If we are defining constructor or function outside class then use syntax: classname::fun name or constructor name

* Every C++ class should have constructor. It is not mandatory but is a good style of programming

* If the variable functions and parameters if thet are same use:
```
    this->variable_name=parameter_name;
```

* Generic/template class is a class which supports any data type. Can use only one data type once. But any data type can be used

* Whenever using class name, we should pass template parameter. Ex: arr<T>::arr( T a, T b)