* 2-3 trees are search trees with degree 3. These are also B-tree(height balanced search trees) of degree 3

* If 3 children are possible(left, middle and right) the it should have 2 keys. Properties are given below:
        1. key1 < key2
        2. All the elements in left child should be less than key1 i.e., l < k1
        3. k2 < r
        4. k1< m > k2
        5. No duplicates

* BST grows downwards whereas 2-3 tree grows downwards

* At the time of insertion need to split the nodes if there are no vacant nodes to insert

* If the nodes become empty after deletion, then nodes should not be empty. Merge that node with sibling. Borrowing the elements from sibling node is also possible in deletion if there are full occupied nodes. If borrowing is not possible we have to go with merge

* Min no.of nodes if height is given =n=(2^h+1 -1) and maximum no.of nodes= n = (3^h+1 -1)/(3-1) = o(log2n)

* Min height if nodes are given= h = loh2(n-1) -1 and max height ig nodes are given = h = log3[n(3-1)+1]-1 = o(log3n)

* Height of 2-3 tres is always logn

* B-tree/B+ trees are used in DBMS

* 2-3-4 tree is a B-tree of degree 4

* B-tree should have all leaves at same level and every node must have [degree/2] children

* In 2-3-4 tree, every node can have 1,2 or 3 keys

* When we have even no.of keys for splitting in 2-3-4 tree, we can have more keys on left/right side