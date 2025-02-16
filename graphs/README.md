* Graph is a collection of vertices and edges

* If the graph is having directions, then it is called directed graph. Parallel edges are connectin to same 2 nodes

* Simple digraph: a graph with no self loop and parallel edges

* Non-directed graph: a graph with no directed edges

* Non-connected graph: more than one component that are not connected

* Strongly connected graph: a directed graph where from every vertex we can reach all other vertices

* Directed acyclic graph: cannot reach the same vertex in any way

* Path: set of all vertices in betweeen a pair of vertex

* Topological ordering of vertices: arranging directed acyclic graph linearly such that edges are going only in forward direction

* Representation of graph is done in the following ways: G=(V,Es)
        1. Adjacency matrix
        2. Adjacency list
        3. Compact list

* Adjacency matrix: if there an edge from i,j then this should be marked as 1 inside matrix and remaining 0. Each row/column represents a matrix. To know which edge is coming in check the column. So in degree can be obtained by checking column and out degree by checking row. Time taken is o(n)

* Adjacency list: taking an array of ll, for each vertex a corresponding ll is created for its adjacent vertices. Time taken depends on no.of vertices and edges. v+2e. For out degree count the number of nodes and for in degree count the nodes that have the nodes list in other node ll. If the requirement is to know the in degree then we can take inverse AL and count the no.of nodes. Time taken is o(n)

* Weighted graph: here the weight is represent in matrix instead of 1. Then it is called as cost adjacency matrix. In adjaceny list along with value in node store weight also. Then it is called as cost adjacency list

* Compact list: v+2e+1, create this sized array and store the corresponding vertices in the index obtained by calculating total no.of edges. Then store this index number in the corresponding vertex. For next vertex start from continued index to store the adjacent vertices. Time taken is o(n)

* Breadth first search: a graph without any side edges is a tree, so a graph like this can be converted into a tree. If we are forming a tree, then from first node we have to start the root, for taking its children order doesn't matter. Dotted line shows adjacent nodes, since drawing a line again makes it a graph, so drawing a dotted line. Root node can be started from any vertex. A vertex should visit all the adjacent nodes. In queue, when visiting a vertex put it in a queue and while exploring that queue take out that vertex and explore. Dotted lines are called as crossed edges. The tree is called BFS spanning tree. Cross edges will be connected to its very nearest adjacent levels only. Analytical time is o(n) and real time taken is o(n^2). This is similar to lever order traversal

* Depth first search: this is similar to pre-order traversal. Visit the vertex and start exploring. Once we get a new vertex stop exploring current vertex, push it into the stack and start exploring the new vertex. Once all the new vertex exploration is done go back, pop out from the stack and explore the old vertex. Marking dotted lines remains same as BF which is called back edges. the tree is called DFS spanning tree. Time taken is o(n)

* Spanning tree: it is a subgraph of a graph having all vertices of a graph but n-1 edges. So that there is no cycle formed by those edges and it vertex must be connected. More than 1 spanning tree is possible for a graph. No.of spanning tree possible = (eCv-1)-cycles

* Min cost spanning tree: cost of all the edges included in the spanning tree must be minimum

* Prim's min cost spanning tree: this algorithm to find Prim's min cost spanning tree. First select a min cost edge, next select the min cost edge but it must be connected to previous edge. Now repeat the same step i.e., select the min cost edge but it should be connected to previous edge. It should be connected because it is a tree. Time taken = (v-1)e= o(n^2). If we are using heap data structute then time taken is v-loge=o(nlogn) 