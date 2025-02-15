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

* Adjacency matrix: if there an edge from i,j then this should be marked as 1 inside matrix and remaining 0

* Adjacency list: taking an array of ll, for each vertex a corresponding ll is created for its adjacent vertices. Time taken depends on no.of vertices and edges. v+2e

* Weighted graph: here the weight is represent in matrix instead of 1. Then it is called as cost adjacency matrix. In adjaceny list along with value in node store weight also. Then it is called as cost adjacency list

* Compact list: v+2e+1, create this sized array and store the corresponding vertices in the index obtained by calculating total no.of edges. Then store this index number in the corresponding vertex. For next vertex start from continued index to store the adjacent vertices. Time taken is o(n)