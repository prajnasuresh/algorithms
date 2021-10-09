#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<vector<int>> &adj, int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);    
}

void bfsUtil(vector<vector<int>> adj, int scr, int V, bool visited[]){
    queue<int> q;
    visited[scr] = true;
    q.push(scr);

    while(!q.empty()){
        int u = q.front();
        q.pop();
        cout << u << " ";
        
        for(auto v: adj[u]){
            if(!visited[v]){
                q.push(v);
                visited[v] = true;
            }
        }
    }
}

void bfs(vector<vector<int>> adj, int V){
    bool visited[V];
    memset(visited, false, sizeof(visited));

    for(int i=0; i<V; i++){
        if(!visited[i])
            bfsUtil(adj, i, V, visited);
    }
}

int main() {

    int V = 4;
    vector<vector<int>> adj(V);

    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 1, 2);
    addEdge(adj, 2, 3);
    addEdge(adj, 3, 3);
    
    bfs(adj, V);
    
    return 0;
}
