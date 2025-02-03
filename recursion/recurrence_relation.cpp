void fun(n){  ----Total time taken by all the statements= T(n)
    if(n>0){ ----- Time taken by this statement =1
        printf("%d",n);----- Time taken by this statement =1
        fun(n-1); ----- Time taken by this statement = T(n-1)
    }
}

T(n)= T(n-1) +2 when n>0
T(n)= 1 when n>0