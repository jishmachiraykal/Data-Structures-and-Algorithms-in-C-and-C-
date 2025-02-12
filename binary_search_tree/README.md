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

* Deleting the key: search for the key, it found delete it. Make that key's parent link to NULL. If that element is haivng a child, then its child will take the element's position. If the root element is getting deleted, then take the inorder traversal successor and predecessor. Either inorder predecessor or successor will take its place. Leaf node will come to root's place

* Right most child of a left subtree of is root's inorder successor and left moct child of right subtree is root's inorder successor. Better to find height and take successor or predecessor

* Time taken by deletion depends on the height of a tree which is o(logn)

* Generating BST from pre-order: Using stack this needs to performed. If it left child push the address to stack and if it is right child do not push the address to stack. Time taken is o(n)

* Drawback of BST: height of BST can be as maximum as o(logn) and as min as o(n). There is no control over the height of a BST it all depends on the order of insertion. Order of insertion or height of BST cannot be controlled. This height can be balanced using AVL trees