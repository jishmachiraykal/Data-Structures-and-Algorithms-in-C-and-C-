* Variable assignment is scalar variables whereas array is vector variables and can store more than 1 value

* If no value is assigned to array, then it will have garbage value. Array will be created during run time. for loop is used for traversing through all the elements of an array. Array can be accessed using name of the array and index.

* Printing elements of an array: 3 ways are there
        1.A[2] or 2[A]
        2. Using pointer access *(A+2)

* Static array: size of array is static

* Dynamic array: size of array is dynamic

* Memory will be allocated at run time. In C++ size of array can be allocated at run time, but in C it has to be allocated at compile time

* Methods of deallocation:In C++, delete []pointer variable and in C free(pointer variable)

* Pointer acts as a name of the array. Heap can be resized using some other method but stack array cannot be resized

* Array created in stack is static array. Array created in heap is dynamic array

```
int *p;
p= new int[4]; // array created in heap
```

* In order to increase the size of array, try to create one more array q of bigger size and then transfer elements from p to q

* Using memcopy also we can copy the arrays. Array size cannot be increased because arrays stores in a contiguos location and we might not know if the next memory is free to increase the size. So it can't be done

* In real, for 2D array memory will be allocated as single dimensional array. But compiler allows us to access 2D array as 1D array
```
Array creation methosds: 
1. A[2][3] = {{1,2},{1,2,3}};

2.Using pointer:
An array is first created in stack with size 3: int *A[3]

3 more arrays are created in heap so get 2D array which is array of array of array
A[0]= new int[4];

A[1]= new int[4];

A[2]= new int[4];
A[3]= new int[4];


hence we get an array = A[3][4]; This can be accessed by like other arrays i.e. A[1][1]=12;

3.  Double pointer: everything in heap
int **A;

A=new int *[3]//same as int *A[3] in previous method  i.e, array of pointers
A[0]= new int[4];

A[1]= new int[4];

A[2]= new int[4];
A[3]= new int[4];


2 dimensional arrays can be accessed using nested 2 for loops
```

* Address of an array at any index by knowing base address(L0), can be calculated/accessed using
```
Addr(A[i])=L0+i*w
w=size of data type. This address is relative address and formula is relative formula
```

* If the array indexing starts from 1 instead of 0 in any other language, then this can be calculated using: Addr(A[i])=L0+(i-1)*w //not there in C++ language, was there in old language

* Array indexing starts from 0 in C++ because, it increases arithmetic operations for n size ie., (i-1) instead of i

* There are 2 ways in which 2D array is stored in 1D array:
                1.Row major mapping
                2.Column major mapping

* 1.Row major mapping: Finding the address of a particular location in 2D array
```
Addr(A[1][2])= 200+(4+2)*2; // base location address+ (leaving first 4 index to access a12+ indexing from second row)* size of data type

Addr(A[2][3]) = 200+(8+3)*2 =  222

Therefore Addr(A[i][j]) = L0 + [i*n+j]*w// if array whole size is A[m][n], then A[3][4] for example n=4

If the indexing starts from 1, then the formula is:
Addr(A[i][j]) = L0 + [(i-1)*n+(j-1)]*w
```

* 2.Column major mapping:
```
Addr(A[i][j])= L0+ [(j*m)+i]*w//// if array whole size is A[m][n], then A[3][4] for example m=3
Both row and column major mapping are having same no.of operations so both are time efficient. Compiler may follow row/column major mapping.

C++, follows row major formula
```

* nD arrays: Type A[d1][d2][d3][d4] -->4D array

* Row major(left to right): Addr(A[i1][i2][i3][i4]) = L0+[i1*d2*d3*d4 + i2*d3*d4 + i3*d4 + i4]*w

* Column major(right to left): Addr(A[i1][i2][i3][i4]) = L0+[i4*d1*d2*d3 + i3*d1*d2 + i2*d1 + i1]*w

* General formula for nD:
```
Row major :
           n                n
L0 + sigma [ ip * pi     dq] * w// sigma takes value from 1 to n and pi takes the value from p+1 to n
         p=1             q=p+1
No. of multiplication required for nD array= n(n-1)/2; = o(n2) which is very high
```

* In order to reduce the computation and to get time complexity in the order of o(n), we need to follow Horner's rule i.e., taking common and reducing the multiplication

* Accessing data in an array using pointers: to access A12= *(*(x+1)+2). Accessing address in an array using pointers: to access A12 address= (*(x+1)+2). X+2 or *(X+2)-- will get the beginning address of 2nd row