* Hashing is faster for searching the elements but it take more space

* One-one mapping: every key is mapped to its corresponding index in hashing table. h(x) = x. This is ideal hashing because time taken for the various operations is constant. It requires more space

* Many to one/modulus hash function: h(x)=x%10, so only 0-9 digits are taken to reduce the space. This is a different function. Sometime more than one key will map to same index in hashing table. This is collision

* Solutions for collision:
    1. Open hashing: this consumed extra spacechaning
    2. Closed hashing(open addressing): linear probing, quadratic probing and double hashing. Here only the given space is comsumed. Here in open addressing values will be stored somewhere where it has free space and not neccesarily the space provided by hash function. It is stored in other place using above mentioned ways

* Chaining: after modulus hashing, to store key a node will be created and value will be stored in the node. If there are more than one key in the same index, it should be kept in the sorted order. This is inserted as chains. Hash table is made of array of LL. Loading factor=lamda=no.of keys/size of array. Using loading factor we assume that each index has no.of loading factor keys. Time taken for average succesful search is 1+lamda/2 and average succesful search is 1+lamda. Hash function need not to be %10. %10 is for last digit, so size will be limited. Choose hash function according to requirement. Choose hash function to make keys uniformly distributed accross hash table 