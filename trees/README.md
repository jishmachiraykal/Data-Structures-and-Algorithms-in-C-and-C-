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