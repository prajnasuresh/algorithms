// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool dfs(vector<int> adj[], vector<bool> &visited, int src, vector<bool> &curr_path_stack){
        visited[src] = 1;
        curr_path_stack[src] = 1;
	    for(auto x : adj[src]){
            if(curr_path_stack[x]) return true;
            if(!visited[x]){
                bool nbrFoundACycle = dfs(adj, visited, x, curr_path_stack);
                if(nbrFoundACycle){
                    return true;
                }
            }
        }
        curr_path_stack[src] = 0;
        return false;
    }
    
    bool isCyclic(int V, vector<int> adj[]) {
        bool ans = 0;
        vector<bool> visited(V, false);
        vector<bool> curr_path_stack(V, false);
        for(int i=0; i<V; i++){
            if(!visited[i]) ans = dfs(adj, visited, i, curr_path_stack);
            if(ans == 1) break;
        }
        return ans;
    }
};

// { Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}
  // } Driver Code Ends
