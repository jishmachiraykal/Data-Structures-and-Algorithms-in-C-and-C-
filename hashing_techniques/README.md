* Hashing is faster for searching the elements but it take more space

* One-one mapping: every key is mapped to its corresponding index in hashing table. h(x) = x. This is ideal hashing because time taken for the various operations is constant. It requires more space

* Many to one/modulus hash function: h(x)=x%10, so only 0-9 digits are taken to reduce the space. This is a different function. Sometime more than one key will map to same index in hashing table. This is collision

* Solutions for collision:
    1. Open hashing: this consumed extra spacechaning
    2. Closed hashing(open addressing): linear probing, quadratic probing and double hashing. Here only the given space is comsumed. Here in open addressing values will be stored somewhere where it has free space and not neccesarily the space provided by hash function. It is stored in other place using above mentioned ways

* Chaining: after modulus hashing, to store key a node will be created and value will be stored in the node. If there are more than one key in the same index, it should be kept in the sorted order. This is inserted as chains. Hash table is made of array of LL. Loading factor=lamda=no.of keys/size of array. Using loading factor we assume that each index has no.of loading factor keys. Time taken for average succesful search is 1+lamda/2 and average succesful search is 1+lamda. Hash function need not to be %10. %10 is for last digit, so size will be limited. Choose hash function according to requirement. Choose hash function to make keys uniformly distributed accross hash table

* Linear probing: its a linear collision technique. h(x)= (h(x)+f(x))%10 where f(i)=i, i=0,1,2.... If there is more than one key to be stored in one index, store the next key in the next free index available. So calculate for f(1)/f(2) etc.. if f(0) is colliding. Insertion is stored like this. Search process is time consuming. If there is a free space stop searching. Loading factor should be always less than or equal to 0.5. Time taken for average unsuccessful search is 1/1-lamda. If any key is deleted, next element should be shifted to the vacant space according to re-hashing. So in linear searching deletion is not recommended as it is difficult

* Quadratic probing: h(x)= (h(x)+f(x))%10 where f(i)=i^2, i=0,1,2.... The difference is that i is getting multiplied 2 times compared to linear probing i.e., next position is found by quadratic value. Next location will be in a distance apart if there is a collision. Time taken for average unsuccessful search is 1/1-lamda

* Double hashing: there are two hash functions. One is basic hash function and other is to remove the collision. Next location will be different location. This actually reduces collision
``` 
    h1(x)=x%10
    h2(x)= R-x%R where R is the nearest prime number(7)
    h(x)=(h1(x)+i*h2(x))%10 where i=0,1,2
```

* Hash functions: Modulus hash function, midsquare hash function and folding hash function. It is recommended that size of hash table must be prime number

* Midsquare: take the key, square the key and get the mid value. Insert the key in the at the index of mid value
        Ex: 11*11=121
        store it at the index 2(mid value)
        If there are 2 middle elements, take those 2 and store it in that index. If that index is not available perform mod

* Folding: partion the key and take 2 elements for example and add all the partition together. Result obtained is the index where the key is stored. If the index is not in the range again add the result and store in that index. If the key is character/string take ASCII value and perform all the operations. Always hash function should give the same result and should avoid collision



