* Character set is the set of characters that are supported by programming languages like C and C++. Machine will not understand characters, they only understand binary values. So having defined no for each character makes computer understand the code. These codes are called are ASCII codes.

* For numerical values(0,1,2,3,.....,9) and for special characters also ASCII code is there. For every symbol on the keyboard has a character set

* ASCII codes starting from 0-127. 7(2^7=128) bits are sufficient to represent ASCII. But RAM allocates min of 1 byte.

* Unicode: Supports all natural languages and it takes 2 bytes.
```
char t='A';
cout<<t; // cout will know t as character data type and prints A. In c, it can be given as %c or %d in printf statement to print character or ASCII value respectively.
```

* Strings: Array of characters. If the size of the array is smaller and there is lesser string, then we have to know till where this string is stored. For that, \0 --> indicates the end of the string

* '\0' should also be taken into consideration when initializing array, as it consumes one space. printf and scanf/ cout and cin both take '\0' into consideration while printing and storing elements. Finding the length of the string is nothing but finding the no.of characters present in the string

* Difference of uppercase and lowercase letter is 32 i.e., 97(a)-65(A)=32 etc...

* If the ASCII code of first string is smaller than the second string which means second string is larger than first string. If both are equal then if any one of string is ending with \0 execution will stop

* Time taken for finding duplicate in string using hash table is o(n)

* Bitwise operations:
        1. Left shift <<
        2. Bits ORing (Merging)
        3. Bits ANDing (Masking)

* In order to ckeck duplicate, we need 26 bits(26 alphabets), so taking 4 bytes (32 bits). So taking long int=4 bytes

* Anagram is two set of strings formed by same set of alphabets
    Steps to check: 
    1. check if both strings are equal.
    2. Take first string start comparing alphabet one by one in another string. If all the alphabets are found then it is anagram.

* Timetaken for this is o(n^2). It is time consuming. If there are any duplicates, then we have to use above procedure. Second method is using hash table. and it taken o(n) time

* Permutation: for n characters, n!(factorial) permutations are possible

* State space tree will represent all possible solutions. Going back and taking other value is called backtracking (the approach). Exploring of all possible solution is called brute force. This approach is main implemented using recursion
