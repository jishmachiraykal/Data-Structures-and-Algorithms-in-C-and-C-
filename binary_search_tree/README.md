* Binary search tree: It is a binary tree for every in which all the elements in its left subtree are smaller than that node and all the elements in the right subtree are greater than that node. This is useful in searching the elements in a optimized way

* Properties of BST:
    1. No duplicates
    2. Inorder traversal will give list of sorted elements
    3. Number of BST for n order= 2nCn/(n+1)
    4. In one shape, key elements can be filled only in one way

* BST are mostly represented using linked list

* Time taken for searching the elements in BST is depends on the height of a tree

* If a tail recursion is converted into loop, then stack is not required

* For insertion in BST, first we have to search for the elements if it is not found then only insert the element because dulplication is not allowed. The point where it gets terminated, then we have to inser the element. Because in that point it will be greater than leftchild and less than right child

* Time taken for the insertion is logn

* Time taken to create a binary search tree is o(nlogn)

* 