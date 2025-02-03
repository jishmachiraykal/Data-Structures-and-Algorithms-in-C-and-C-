* Data structure is arrangement of collection of data items so that they can be used efficiently and operations on that data efficiently. It's all about arrangement of data and operations on that data inside the main memory during the execution of program

* Program files and data are stored in the storage/hard disk. In order to run the application this needs to be brought into the main memory

* Data base is arranging the in model such as relational model in the permanent storage so that it can be retrieved and accessed by applications easily

* Commercial data is of 2 types.
    1. Operational data
    2.Legacy/historical data which is not in use now and can be kept in array of disks when required

So this large size data is called data warehouse and algorithm written to analyze this data is called data mining

* Storing and utilizing the large size data is big data

* The area occupied by the program in the main memory is called code section. It is not fixed, depends on the size of the program. Once program is loaded CPU will start executing the program

* Block of stack memory belongs to main function is called activation record/stack frame of main func. Memory for the variables will be created inside stack

* Static memory allocation: How many bytes of memory required by this function was decided at compile time

* Currently executing function will access the top most activation record

* When the top most function execution ends it comes to next and deletes activation record and finally comes to main func and deletes activation record of main func. Hence this is called stack.
Memory required by function depends on number of variables and its sizes. This is decided by compiler.

* The term heap can be used for organized thing or non-organized thing. Here heap memory is used for unorganized memory. Stack is organized. Heap should be treated as resource. Needs to be used only when required and has to be destroyed when not needed

* Dynamic memory allocation is done using heap

* Physical data structures: array and linked list. These are called physical because these decides how the memory is organized or designed. Size of the array is static/fixed

* Linked list is variable. Its list size expanded later when needed by adding node and it is always created in heap

* Logical data structures: Stack, queue, trees, graph and hash table. The discipline to add/delete node/data from physical data structure is defined using logical data structure.

* Abstract datatype is using a data type without knowing its internal details

* Representation of list can be done using arrays or linked list

* Concept of abstract data type is define the data and operations on data together and let it be used as data type by hiding all the internal details

* Different operations on list:
    a.add/append(index,element)
    b.insert(index,element)
    c.replace(index,element)
    d.search/contains(key)
    e.sort()

*  If we have n items in an array, then it takes time n to at least go through all elements. This is represented as degreeof polynomial: o(n)/order of n

* To measure the time complexity, we need either work we are doing or can use code

* If n is getting divided by 2 everytime, then time complexity is log2 n

* If it is matrix and we are processing all the elements, then time complexity is o(n2). If processing only column or row then it is o(n)

* In array of linked list, o(m+n) is required and if only we are processing n then time complexity will o(n)

* If it is binary tree, searching for an element along the height of the tree then it is O(log n). If processing all the elements, then it is o(n)

* Every instruction in a program takes one unit of time.
```
        If there are 3 simple instruction then it takes 3 unit of time ie., f(n)=3n^0
        o(1)
        o(n^0)-o(1)
```

* for nested loop it is n*(n+1) and for loop it is n+1

* Instead of order we can say bigo