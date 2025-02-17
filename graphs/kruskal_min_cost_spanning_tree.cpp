#include <limits.h>
#include <stdio.h>
#include <iostream>
#define I INT_MAX

using namespace std;

int edges[3][9] = {{ 1, 1,  2,  2, 3,  4,  4,  5,  5},
                       { 2, 6,  3,  7, 4,  5,  7,  6,  7},
                       {25, 5, 12, 10, 8, 16, 14, 20, 18}};
    
    int set[8]={-1,-1,-1,-1,-1,-1,-1,-1};
    int included[9]={0};
    int t[2][6];

void myUnion(int u, int v){
    if(set[u]<set[v]){
        set[u]+=set[v];
        set[v]=u;
    }else{
        set[v]+=set[u];
        set[u]=v;
    }
}

int find(int u){
    int x=u,v=0;
    
    while(set[x]>0){
        x=set[x];
    }
    
    while(u!=x){  // collapsing find
        v=set[u];
        set[u]=x;
        u=v;
    }
    return x;
}

int main()
{
    int i=0,j,k,u,v,min=I,n=7,e=9; // n is no.of vertices and e is no.of edges
    
    while(i<n-1){
        min=I;
        
        // finding min cost edge
        for(j=0;j<e;j++){
            if(included[j]==0 && edges[2][j]<min){
                min=edges[2][j];
                u=edges[0][j];
                v=edges[1][j];
                k=j; // marking the values in k
            }
        }    
        
        // finding to include in the solution
        if(find(u)!=find(v)){ // if they are equal they form a cycle
            t[0][i]=u;
            t[1][i]=v;
            myUnion(find(u),find(v)); // joining the parents
            i++; // one edge is found move to the next edge(index)
        }
        
        included[k]=1;
    }
    
    for(i=0;i<n-1;i++){
        cout<<"("<<t[0][i]<<","<<t[1][i]<<")"<<endl;
    }
    
    return 0;
}