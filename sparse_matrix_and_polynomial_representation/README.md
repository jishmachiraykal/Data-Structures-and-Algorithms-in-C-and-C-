* Sparse matrix: Very few non-zero elements and more zero elements

* Storing all the elements will waste of time and process. For storing non-zero elements there are 3 approaches:
```
        1.Co-ordinate list/three column representation: Stroing info in 3 columns
        rows in which element is present | column in which element is present | element itself

        First row is used for storing no.of rows,no.of columns and total no.of elements and from second row onwards we have to store the element and in which row and column it is present

        2. Compressed sparse row: Storing using arrays
                a) One array to store non-zero elements
                b) Arrays to rows: first value would be 0 + second value will be no.of non-zero element in first row + third value will be no.of non-zero element in first row and no.of non-zero element in second row+ .... + and goes on till end of the row
                c) Arrays to columns: Column number in which non-zero elements are present

These approach of storing elements will reduce the memory size and improves efficiency
```

* If column and row numbers are matching, then only add the no. of that row and column in three column representation. If they are not matching, take the element which comes first

* Polynomial is a collection of terms, in each term has a co-efficient (by default it is 1) + exponent of x. If no exponent means it is zero

* To evaluate the polynomial, take exponent value raise x to the power of exponent and multiply with co-eff. And keep on adding like this

* Common terms with same exponent will be added, if no common term, then all the terms will all the terms will be added individually. If are no common exp, then the term which is having greater exponent will be added first

* When assigning a structure to another structure, all the elements will be copied. Need not to copy them individually


