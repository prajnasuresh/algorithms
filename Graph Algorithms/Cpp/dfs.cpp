// DFS (Depth First Search):
// Depth-first search is used in topological sorting, scheduling problems, cycle detection in graphs, and solving puzzles with only one solution, such as a maze or a sudoku puzzle. Other applications involve analyzing networks,
// for example, testing if a graph is bipartite.

// Code

//---------------------------START------------------------------------//
#include <bits/stdc++.h>
using namespace std;
void dfs(vector<int> &vis,vector<int> adj[],int node){
    vis[node]=1;
   
    for(auto x : adj[node]){
     
        if(!vis[x]){
          
            dfs(vis,adj,x);
        }
    }
    
}


int main(){
    
    //Here vis=visited array 
    //Here adj=Adjacency List
    
   int count=0;
    for(int i=0;i<vis.size();i++){
        if(!vis[i]){
            dfs(adj,vis,i);
            count+=1;
        }
    }
    
    cout<<count<<endl; //It gives number of connected components
}

