* 2-3 trees are search trees with degree 3. These are also B-tree(height balanced search trees) of degree 3

* If 3 children are possible(left, middle and right) the it should have 2 keys. Properties are given below:
        1. key1 < key2
        2. All the elements in left child should be less than key1 i.e., l < k1
        3. k2 < r
        4. k1 < m > k2
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

* Red-black tree is a height balanced binary serach tree like 2-3-4 tree. Every node is red or black. Root and NULL are black

* No.of black nodes from root to leaf are same. No consecutiive red nodes should be there. Parent and child of red are black.

* Newly inserted node should be red. Height of red-black tree is min logn and max 2logn

* When there is a red-red conflict, it has be adjusted using below 2 operations:
        1. Re-colouring: If the parent is red and parent's sibling is also red make parent and parent's sibling(node/NULL) black and parent's parent red. Again if parenrt's parent is root node then make it black
        2. Rotation: If the parent is red and but parent's sibling(node/NULL) is black, then perform rotation and change the colour of root if needed.RR rotation/ LL rotation here called as zig-zig rotation and LR rotation and RL rotation here called as zig-zag rotation

* No need to give special attention to maintain black colour. If there red colour conflict, then perform the above steps

* In recolouring after recolouring the parent's parent, check its ancestors and again if there is a conflict re-colour for that node

* To confirm that there is no conflict, check no.of black from root to leaf should be same then tree looks good. No need to any adjustments

* Red-black tree vs 2-3-4 tree: red colour nodes are related to its parent black colour node

* When we delete a node from BST, either it will be leaf node or a node with exactly one child

* If we are deleting any red node and if does not have any children, then simply delete it. If there is any child, then child will take its place

* If a black node is getting deleted and its sibling is red then perform rotation
