* Tree is a collection of nodes(vertices) and edges(the links). If there are n nodes, then n-1 edges

* Main node is root and other nodes are arranged in disjoint subsets. Each subset is tree again

* Decesendents are those set of nodes which can be reached from particular or under that node

* Ancestors: for any node the path along from that node to root node are ancestors

* Degree of a node: number of direct children it is having. Degree of a tree is minimum 3

* External/leaf/terminal nodes: Nodes with degree zero

* Internal/non-leaf/non-terminal nodes: Nodes with degree greater than 0

* Level starts from 1 onwards. Nodes are considered

* Height starts from 0. Edges are considered

* Forest: Collection of trees

* Binary tree: a tree of maximum degree 2 i.,e deg(T)<=2. Therefore binary tree can have 0,1 or 2 children. Some types of binary trees 
        1. Left skewed binary tree 
        2. Right skewed binary tree

* Unlabelled Binary Trees: no.of trees for given number of nodes can be generated using below formula:
       Catalan number = T(n)= (2nCn)/(n+1)

* No.of binary trees with maximum height = 2^n-1

* Catalan number can also be obtained by T(n)= E(summation starts i from 1 to n)T(i-1)*T(n-i)

* Labelled Binary Trees: no.of trees for given number of nodes can be generated using below formula:
       Catalan number = T(n)= ((2nCn)/(n+1)*n!)

* Height vs Nodes if height is given:
        1. Minimum nodes for the given height= n= h+1
        2. Maximum nodes for the given height= n= (2^h+1-1)

* Height vs Nodes if nodes are given: height can vary from o(logn)-o(n)
        1. Minimum height for the given node= h= log2(n+1)-1
        2. Maximum height for the given node= h= n-1

* Nodes with deg(0)= nodes with deg(2)+1. This is always true in binary trees

* Strict/Proper/Complete binary tree: a binary tree can have either 0 or 2 children. No 1 child

* Height vs Nodes of strict binary tree if height is given:
        1. Minimum nodes for the given height= n= 2h+1
        2. Maximum nodes for the given height= n= (2^h+1-1)

* Height vs Nodes of strict binary tree if nodes are given: height can vary from o(logn)-o(n)
        1. Minimum height for the given node= h= log2(n+1)-1
        2. Maximum height for the given node= h= (n-1)/2

* Internal vs External nodes of strict binary tree: e=i+1

* n-ary trees: a tree with max n degree. It can be 0,1,2,3........n
        Ex: If 3-ary tree having max og 2 children is acceptable. It should not be more than 3. In this case it is also a binary tree

* Strict n-ary tree: every tree can have either 0 child or n children
        Ex: A 3-ary tree can have 0 child or 3 children

* Height vs Nodes of strict n-ary tree if height is given:
        1. Minimum nodes for the given height= n= mh+1 // m=3 for 3-ary tree and m-4 for 4-ary tree
        2. Maximum nodes for the given height= n= (m^h+1-1)/(m-1)

* Height vs Nodes of strict n-ary tree if nodes are given: height can vary from o(logn)-o(n)
        1. Minimum height for the given node= h= logm[n(m-1)+1]-1
        2. Maximum height for the given node= h= (n-1)/m

* Internal vs External nodes of strict n-ary tree: e=(m-1)i+1  // m=3 for 3-ary tree and m-4 for 4-ary tree

* Representation of binary tree: 1. array 2. linked list

* Binary tree rep using arrays: Considering index starts from 1. All the nodes should be arranged in array by maintaining its relationship i.e., parent and child. Therefore if any element is at index i, then its left child will be at 2*i and right child will be at 2*i+1. And if we take any child its parent will be at i/2. If we are getting decimal result, take interger value only to know the parent location

* Binary tree using LL: If there is no child, make it NULL. For n nodes, there will be n+1 binary trees

* Full vs complete binary tree: A binary tree of height h having max no.of nodes is called full binary tree. For h height, no.of nodes=(2^h+1-1)
If the binary tree is represented in an array, it should not be having any blank spaces in between the elements. This type of binary tree is called complete binary tree. A full binary tree is always a complete binary tree but vice-versa need not to be true

* Strict vs Complete binary tree: These two binary trees are also called as complete and almost complete binary trees respectively. Complete binary tree is more useful

* Tree traversal: visiting all the nodes. For binary tree below traversals are possible:
        1. Preorder: visit(node), preorder(left subtree) and preorder(right subtree)
        2. Inorder: inorder(left subtree),visit(node) and inorder(right subtree)
        3. Postorder: postorder(left subtree), postorder(right subtree) and visit(node)
        4. Level order: level by level
        For the bigger tree, break the tree and traverse through the tree

* Binary tree travesal easy methods

        1. Method one:
                a. pre-order: draw a line below the tree, connect to that line from left and later add one by one from left to right
                b. in-order:  draw a line below the tree, connect to that line from straight and later add one by one from left to right
                c. post-order: draw a line below the tree, connect to that line from right and later add one by one from left to right
                
        2. Method two:
                a. pre-order: on every node, put a mark on the left hand side go along the boundary and mark it out
                b. in-order: draw a mark at the bottom of each node go along the boundaries, take elements and mark it out
                c. post-order: on every node, put a mark on the right hand side go along the boundary and mark it out

        3. Method three:
                a. pre-order: start from root, take your fingers along the tree,by keeping finger at left side, take the element that is completely visible and mark it out
                b. in-order:  start from root, take your fingers along the tree by keeping finger at the top, take the element that is completely visible and mark it out
                c. post-order:  start from root, take your fingers along the tree,by keeping finger at right side, take the element that is completely visible and mark it out

* First element of pre-order and last element of post-order will always be same

* If only pre-order/inorder/post-order is given or any two are given, we cannot generate a unique tree. But pre-order+inorder and post-order+inorder can give a unique tree

* Generating tree from traversal: Take inorder element and the first element from pre-order is root element. Then split it to obtain the children. This will give the unique tree. Time taken is o(n^2)