* AVL trees: height balanced binary search tree

* Balance factor= Height of left subtree - height of right sub tree. Valid balance factor is -1,0,1, otherwise it is invalid

* If the tree is imbalanaced, then we can perform rotation at the point where it became imbalanced. If the tree became imbalance after inserting the element to left to left, then performing LL rotation works. After rotation, in whichever node we have performed rotation that node should become balanced. This type of rotation is also called as right rotation/ clock rotation. This is single rotation

* Rotation is always done in 3 nodes

* RR rotation is similar to LL rotation except that it is rotated right for right to right child. This is also called as left rotation/ anti-clock rotation. This is single rotation

* LR rotation: Insertion will be done in the left right side. And pull left side first and then right side. This is also called as double rotation

* RL rotation: Insertion will be done in the right left side. And pull right side first and then left side. This is also called as double rotation

* If the balance factor is 0,1,2 then it is left left insertion. If it is -1 then left right insertion.

* For rotation, only 3 nodes will be considered. If the insertion is done next to its right or left. From rotated node, the side is considered for first 2 nodes irrespective where exactly it has inserted anywhere after this. The node over which rotation was performed should become 0