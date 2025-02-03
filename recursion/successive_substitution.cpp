void fun(n){  ----Total time taken by all the statements= T(n)
    if(n>0){ ----- Time taken by this statement =1
        printf("%d",n);----- Time taken by this statement =1
        fun(n-1); ----- Time taken by this statement = T(n-1)
    }
}

T(n)= T(n-1) +2 when n>0
T(n)= 1 when n>0

If there is any constant value make it 1, so 2 becomes 1
T(n)= T(n-1) + 1
since T(n)= T(n-1) + 1
Therefore T(n-1)=T(n-2)+1, substitute n by n-1

T(n)= T(n-2)+1+1;
T(n)=T(n-2)+2; and it goes on till K like this therefore
T(k)=T(k-n)+n;

assume n-k=0;

therefore n=k;
T(n)=T(n-n)+n;
T(n)=T(0)+n;
T(n)=1+n --------> o(n)