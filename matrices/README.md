* Special matrix are square martix whose dimension is n*n

* Diagonal matrix: Only diagonal elements are constants and other elements are zero. A[i,j]=0 if i is not equal to j.

* Extra zeros in diagonal element waste memory and storing non-zero elements in a 1D array is a good option.

* In matrix, indices starts from 1 usually can be taken as 0 also.

* Finding the diagonal elements in array: M[i,j] where i and j are rows and columns respectively. If(i==j) // rows and columns numbers will be same in array, then at A[i-1]/A[j-1], we can find diagonal elements

* Lower triangular matrix: Lower triangular part is non-zero elements and upper triangular part of matrix is 0.
```
M[i,j] =0, if i<j
M[i,j] =non-zero, if i>=j
```
* For any n*n matrix, non-zero elements=n(n+1)/2. Zero elements= n2(total no.of elements in matrix)-n(n+1)/2 =n(n-1)/2

* Storing the lower triangular matrix in program:
        1. Row major method 
        2. column major method

* Row major mapping: To access the lower triangular matrix non-zero elements in array we should use, Index(A[i][j])=[i(i-1)/2]+(j-1);

* Column major mapping: To access the lower triangular matrix non-zero elements in array we should use, Index(A[i][j])=[n(j-1) - [1+2+3+.....+(j-2)]+(i-j) = [n(j-1)-(j-2)(j-1)/2]+(i-j)

* Lower triangular matrix using column major matrix, change the formular in set, get and display function

* For lower triangular matrix in C++ using column major mapping, change the formula in set, get and display function

* Upper triangular matrix: Non-zero elements are in the upper triangular part of the matrix. Rest of the elements are zero. This is a square matrix.

* M[i,j] = if i>j and M[i,j]=non-zero if i<=j

* No.of non-zero elements=n(n+1)/2 and no.of zero elements=n(n-1)/2

* Formula for row-major and column-major mapping remains same as that of lower triangular matrix, only i and j will interchange here.

* Row-major mapping: Index(A[i][j])= [ (i-1)n - (i-2)*(i-1)/2]+(j-i)

* Column major mapping for upper triangular matrix: Index(A[i][j])= [j*(j-1)/2] +( i-1)

* Symmetric: Element at location i, j is equal to an element at location j,i.

* M[i,j]=M[j,i]. If we store i,j value, then we can retrieve j,i values also. So it is sufficient to store elements i  lower triangular part or upper triangular part

* Tridiagonal matrix: Elements are there in main diagonal, low diagonal and in upper diagonal part of matrix. Rest of the elements are zero.
```
        Main diagonal: i-j=0
        Lower diagonal: i-j=1
        Upper diagonal: i-j=-1

        M[i,j] is non-zero if i-j <=1
        M[i,j] = zero if i-j >1

        No.of non-zero elements= 3n-2
```

* Elements are stored in the following order:
1. Lower diagonal 2. Main diagonal 3. Upper diagonal

Index(A[i][j])
Case 1: If i-j=1(Lower diagonal)
Index(A[i][j])=i-2

Case 2: If i-j=0(Main diagonal)

Index(A[i][j])=(n-1)+(i-1)

Case 3: If i-j=-1(Upper diagonal)

Index(A[i][j])=(2n-1)+(i-1)

* Square band matrix: If there is more than 1 diagonal before and after main diagonal. If forms a band, this type of matrix is called square band matrix

* Toeplitz matrix: Elements in diagonal are same (main, lower and upper)
```
        M[i,j]=M[i-1,j-1], so it is sufficient to store a row of elements and column of elements.

        No. of elements: n+n-1 (size of array)

        Index(A[i][j])

        Case 1: if i<=j (upper diagonal)
        Index(A[i][j]) = j-i

        Case 1: if i>j (lower diagonal)
        Index(A[i][j]) = n+ i-j-1
```





