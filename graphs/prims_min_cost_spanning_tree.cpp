#include <iostream>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#define I INT_MAX // defining infinity value

using namespace std;

int cost [8][8] {
            {I, I, I, I, I, I, I, I},
            {I, I, 25, I, I, I, 5, I},
            {I, 25, I, 12, I, I, I, 10},
            {I, I, 12, I, 8, I, I, I},
            {I, I, I, 8, I, 16, I, 14},
            {I, I, I, I, 16, I, 20, 18},
            {I, 5, I, I, I, 20, I, I},
            {I, I, 10, I, 14, 18, I, I},
    };

int near[8]={I,I,I,I,I,I,I,I}; // initializing all the elements of near array to inifinity
int t[2][7]; // creating a t array with 2 rows and 7 columns



int main()
{
    int i,j,k,u,v,n=7,min=I; // to find smaller value we should have larger value, hence taking min=I
    
    for(i=0;i<=n;i++){ // scan through the rows, starting with first row
        for(j=i;j<=n;j++){ // scan through the columns, starting with i to scan only upper triangular matrix
                if(cost[i][j]<min){ // checking the smallest weight
                    min=cost[i][j]; // getting the min cost edge
                    u=i;
                    v=j;
                }    
        }
    }
    
    t[0][0]=u, t[1][0]=v;
    near[u]=near[v]=0;
    
    for(i=0;i<=n;i++){ // initialization of near array
        if(near[i]!=0){
        if(cost[i][u]<cost[i][v]){ // checking all other vertices if they are nearer to u or v
            near[i]=u;
        }else{
            near[i]=v;
        }
        }
    }
    
    for(i=1;i<=n-1;i++){ // getting remaining set of edges
        min=I;
        for(j=1;j<=n;j++){
            if(near[j]!=0 && cost[j][near[j]]<min){
                k=j;
                min=cost[j][near[j]];
            }
        }
    
    t[0][i]=k;
    t[1][i]=near[k];
    near[k]=0; // setting near array back to 10
    
    // update near array to check if other vertices are near to k
    for(j=0;j<=n;j++){
            if(near[j]!=0 && cost[j][k]<cost[j][near[j]]){
                near[j]=k;
            }
        }   
    }
    for(i=0;i<=n-1;i++){
        cout<<"("<<t[0][i]<<","<<t[1][i]<<")"<<endl;
    }

    return 0;
}