* Data structure array and set of operations together is called array as abstract data type(ADT)

* If we are creating an array using pointer, then we need to define its size. Size can be defined later in heap

* Adding is nothing but adding a new element at the end of the array or the next free space. time taken: o(n^0)=o(1)
```
Add(x):
A[length]=x;

length++;
```

* Insert(index,x): Insert(4,15)

* 1.Move the element from that index to next index and also move the following elements to its next indeces, then free up the space and add required element.

* Time taken by this function actually depends on index where we are inserting: time taken min=o(1) and time taken max=o(n)

* If we delete an element from an array, and leave it blank it becomes difficult to find out other elements are there or not there. So we have to shift the elements to occupy the deleted space

* Once the array is deleted, we need to decrement the length of the array. Min and max time required for this operation is 2 and n+2 respectively

* Best case time o(1) and worst case time is o(n)

* To search, there should not be any duplication. Result of the search is where the location is present

* return -1 if the key element is not found. Index starts from 0, so printing -1 shows that the element not found

* Best case time is o(1) and worst case time is o(n). Time taken for unsuccessful search is always 1. Average time case is (n(n+1)/2)/n= n(n+1)/2 = o(1)

* Average time analysis takes more time and time taken will same as that of worst-case analysis. So worst case analysis is always made

* There are chances that, we have to perform searching for the same element again and again. Which is time consuming. One thing to avoid this is, once the element is found shift the element one index back. So if we search the next time, we have to compare less elements. This method is called transposition

* Second method is to directly swap the key element with the first element. This is called as move to front/head

* The condition to do binary search is that the elements in array should be sorted. Binary search means, this will search for the element in the middle and split it into two.

* Binary search, mid= low+high/2. After taking the mid value if we have to compare the key will mid value, if it is lower then seach in the first half else second half. This works because the elements will be sorted

* And again if the key is lower than the mid, then again split it. Therefore, binary search = (l+ mid-1)/2. If key element is greater than this index value

* Then, binary search = (l+h)/2. Here l=mid+1. If it is lesser , then l and h will should point on same index. Binary search= (l+h)/2

* In the unsuccessful attempt to find key, if l becomes greater than h. Then execution needs to be stopped. Because low cannot be greater than high

* Iterative procedure binary search algorithm:
```
        Algorithm BinSearch(l,h,key) {
        while(l<=h) {
        mid = [(l+h)/2];
        if(key==A[mid]) return mid;
        else if (key<A[mid])
                h=mid-1;
        else
            l=mid+1;
        }
        return-1;
        }
```

* For unsuccessful search, return -1. As array indexing starts from 0, returning -1 indicated key not found

* Min is 1 and max 4 comparisons are required to performm binary search. No.of comparison depends on the height of the tree i.e., logn. Time taken=logn

* Best time case o(1) and worst time case is o(logn). Exat formula is log base2 *n. But we take it as logn

* For unsuccessful search, it reaches end of the tree always and time taken is always o(logn). Recursive binary search also behaves in the same way

* Average case analysis of binary search is logn.
```
I= sum of the paths of successful nodes
E=sum of the paths of external nodes/unsuccessful nodes

Path taken by external nodes = E=I+2n is always true
no.of external nodes=e=i+1

Average successful search time of n nodes = As(n)=1+( I/n) = logn; //n=no.of nodes
Average unsuccessful search time of n nodes = Au(n)=E/n+1 =logn;
```

* Time taken by:
        1. get function is constant i.e., 1
        2. set function is constant i.e., 1
        3. max function is o(n)
        4. min function is o(n)
        5. sum function is o(n)
        6. average function is o(n)

* To reverse an array, we take an auxiliary array copy elements of original array from last index to auxiliary array. Then again copying from auxiallary array to original array. Time taken to perform this is o(n)

* To reverse an array, we take an auxiliary array copy elements of original array from last index to auxiliary array. Then again copying from auxiallary array to original array. Time taken to perform this is o(n)

* Another way of reversing an array using swapping method. Time taken for this is o(n)

* In left/right shifting, there will be a loss of one element. Left/right rotation is nothing but the lost/deleted element will be placed in the space left after left/right shift. Time taken= o(n)

* Usage: On led boards, diaplaying of ads which will keep on rotating i.e., welcome..... message

* Inserting a number in an sorted order, for this we need to check from the last number. If the number we are inserting is lesser than the last number. Shift the last number by one position and check for remaining number

* Procedure to check if the numbers are sorted or not: 1. Check if current number is less than next number. If not then it is not sorted

* Min time taken for this is constant o(1) and max is o(n)

* Time taken for shifting all the -ve no. to one side and +ve to the other side takes o(n). Exact number is n+2 for comparing the elements

* Merging 2 arrays: combining 2 sorted arrays in an sorted order. In order to combine we need one more array. In any of the list, one element will be left over. So copy that last element also. Total time taken for copying is thetaof(m+n)

* Union on unsorted set of elements: Copying one set of elements from an array and to copy second set of elements search if the element is already present in the third array, if not then copy the elements

* Time taken = m+m*n= n+n*n//taking m as n = n+n^2=o(n^2)

* Union on sorted set of elements: Use merging procedure. Time taken=theta(m+n)=theta(n+n)=theta(n)

* Intersection on unsorted array: Taking common element from 2 arrays and storing the result in third array. Time taken= m*n=n*n=o(n^2)

* Intersection on sorted array: Use similar to merging concept. Time taken= theta(m+n)=theta(n)

* Difference on unsorted array:A-B, then take only the elements which are in A and not in B. Time taken=o(n^2)

* Difference on sorted array: Using the similar to merge process. Time taken=theta( m+n)=theta(n)

* Set membership function is same as that of searching

* A Menu Driven program is a program that represents a menu of options to the user and different actions are performed based on different options

* A class in C++ should have data members and member functions. Usually data members are private and member functions are public

* Finding single missing element in sorted array: Sum of n natural nos starting from 1= n(n+1)/2

* Finding a single missing element in an sequence of sorted array starting from random number and not 1:
        Steps: 1. Taking difference between the index and number. For all the iteration we will get the same vale except one different no. 
        Take that index+ difference of all other index and number given missing number

* Timke taken to find single and multiple missing element in an array is o(n)

* Finding missing element from unsorted array:
    Steps: 
        1. Take an array whose size is equal to the max number in the unsorted array
        2. scan the unsorted array one by one and increment the array value by 1 in that particular index of the second reference array
        3. Missing element index will have the value 0. So in this way we can find the missing element
    This is done using hash table (reference array) and this takes constant time i.e. ideal time

* Time taken to scan elements(o(n)) and increment the value(o(1)) is o(n)

* Hash table takes more space, if space is constrained then hash table cannot be used

* Time taken: while loop execution is negligible. Hence time taken is o(n)

* Time taken to find duplicates in sorted array using hashing is o(n)

* Time taken is bego of n^2/o(n^2)

* Time taken for finding the duplicates in unsorted array is o(n^2) and time taken for finding the duplicates in unsorted array using hash table is o(n)

* Find a pair with sum K=a+b. Here a sum value will be given and from array we need to check which 2 elements sum will form K

* Time taken for finding pair of elements with sum K: o(n^2). Since this is time consuming, for faster method we can use hashing

* Time taken to find pair of elements with sum K using hashing procedure is o(n) i.e.., less time consuming

* Time taken for finding a pair of elements with sum K in sorted array = o(n)

* Time taken for finding max and min in a single scan= o(n)

*  Best case=o(n-1) if the order is in descending and worst case=o(2(n-1)) if the order is in ascending as it needs to always enter into elseif contd