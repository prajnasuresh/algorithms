#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <string.h>
using namespace std;

// mainly topo sort then on that topo sort stack make BFS like comparision

void TopoSort(int node, vector<pair<int, int>> adj[], bool visited[], stack<int> &st)
{
    visited[node] = true;
    for (auto it : adj[node])
    {
        if (!visited[it.first])
        {
            TopoSort(it.first, adj, visited, st);
        }
    }
    st.push(node);
}

vector<int> shortPathDAG(int V, vector<pair<int, int>> adj[], int src)
{
    vector<int> distance(V, INT_MAX);
    bool visited[V];
    memset(visited, false, sizeof(visited));
    stack<int> st;
    for (int i = 0; i < V; i++)
    {
        if (!visited[i])
        {
            TopoSort(i, adj, visited, st);
        }
    }

    distance[src] = 0;

    while (!st.empty())
    {
        int node = st.top();
        st.pop();
        //means this node has been previously reached
        if (distance[node] != INT_MAX)
        {
            for (auto it : adj[node])
            {
                if (distance[node] + it.second < distance[it.first])
                {
                    distance[it.first] = distance[node] + it.second;
                }
            }
        }
    }
    return distance;
}

int main()
{
    vector<pair<int, int>> adj[6];

    adj[0].push_back({1, 2});
    adj[0].push_back({4, 1});

    adj[1].push_back({2, 5});

    adj[2].push_back({3, 6});

    adj[4].push_back({2, 2});
    adj[4].push_back({5, 4});

    adj[5].push_back({3, 1});

    vector<int> distance = shortPathDAG(6, adj, 0);

    for (int i = 0; i < distance.size(); i++)
        cout << i << " " << distance[i] << "\n";

    return 0;
}