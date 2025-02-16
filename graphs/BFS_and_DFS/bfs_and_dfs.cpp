#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "queue.h"

using namespace std;

void BFS(int G[][7],int start, int n){ // breadth first search
    int i=start; // variable to start the traversal
    //struct queue q;
    int visited[7]={0}; // adjacency matrix
    
    printf("%d ",i); // printing the starting vertex
    visited[i]=1; // marking the visited nodes as 1 
    
    enqueue(i);
    
    while(!isEmpty()){
        i=dequeue();
        for(int j=1;j<n;j++){ // j to start exploring the variables
            if(G[i][j]==1 && visited[j]==0){
                printf("%d ", j);
                visited[j]=1;
                enqueue(j);
            }
        }
    }
}

void DFS(int G[][7],int start, int n){ // depth first search
    static int visited[7]={0};
    int j;
    
    if(visited[start]==0){ // checking is the starting index is already visited or not
        printf("%d ", start);
        visited[start]=1; // marking visited node as 1 
        
        for(j=1;j<n;j++){
            if(G[start][j]==1 && visited[j]==0){
                DFS(G,j,n);
            }
        }
    }

}

int main()
{
    int G[7][7]={{0,0,0,0,0,0,0},
                 {0,0,1,1,0,0,0}, // starting from index 1,because 0 BFS/DFS is invalid
                 {0,1,0,0,1,0,0},
                 {0,1,0,0,1,0,0},
                 {0,0,1,1,0,1,1},
                 {0,0,0,0,1,0,0},
                 {0,0,0,0,1,0,0}};
    BFS(G,1,7);
    DFS(G,1,7); // nodes are visited in numerical order though we can visit them in any order

    return 0;
}