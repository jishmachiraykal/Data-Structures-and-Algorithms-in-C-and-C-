* AVL trees: height balanced binary search tree

* Balance factor= Height of left subtree - height of right sub tree. Valid balance factor is -1,0,1, otherwise it is invalid

* If the tree is imbalanaced, then we can perform rotation at the point where it became imbalanced. If the tree became imbalance after inserting the element to left to left, then performing LL rotation works. After rotation, in whichever node we have performed rotation that node should become balanced. This type of rotation is also called as right rotation/ clock rotation. This is single rotation

* Rotation is always done in 3 nodes

* RR rotation is similar to LL rotation except that it is rotated right for right to right child. This is also called as left rotation/ anti-clock rotation. This is single rotation

* LR rotation: Insertion will be done in the left right side. And pull left side first and then right side. This is also called as double rotation

* RL rotation: Insertion will be done in the right left side. And pull right side first and then left side. This is also called as double rotation

* If the balance factor is 0,1,2 then it is left left insertion. If it is -1 then left right insertion.

* For rotation, only 3 nodes will be considered. If the insertion is done next to its right or left. From rotated node, the side is considered for first 2 nodes irrespective where exactly it has inserted anywhere after this. The node over which rotation was performed should become 0

* The moment AVL tree becomes imbalanced after inserting a new node, we have to perform rotation and make it balanced. Otherwise balance factor will become 3,4.... 

* AVL tree is perfect binary search tree. Deletion in AVL tree is same as that of deletion in BST

* L1 rotation in deletion is LL rotation itself

* For L0 rotation in deletion we can perform L1 or L-1 rotation

* R1,R-1 and R0 rotations are similar to L1,L-1 and L0 rotation just right rotation will have the mirror images of left

* Height analysis of AVL trees: If height is 0 then no.of nodes should be 0 and if height is 1 then no.of nodes should be 1. Otherwise min no.of nodes required for a given height in AVL tree is n(h)=n(h-2)+n(h-1)+1. This formula is similar to Fibonacci series. Fibonacci series is best used in balanced series

* If n nodes are given, then:
    1. Min height= log2(n+1)
    2. Max height will be similar to above analysis where height is given. Approximately = 1.44log2(n+2)

* AVL trees height is always in terms of log