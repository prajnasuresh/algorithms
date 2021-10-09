#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <string.h>
using namespace std;

//Dijkstra_Algorithm's work only on positive weighted (negetive work but give wrong ans)
vector<int> Dijkstra_Algorithm(int V, vector<pair<int, int>> adj[], int src)
{
    vector<int> distance(V, INT_MAX);
    //mean Heap with Priority Queue
    //here node with sortest distance on top
    //pair for {ditance,node}
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    pq.push({0, src});

    distance[src] = 0;

    while (!pq.empty())
    {
        int dist = pq.top().first;
        int node = pq.top().second;
        pq.pop();

        for (auto it : adj[node])
        {
            //weight to next + dist till prev < distanc[next]
            if (it.second + dist < distance[it.first])
            {
                distance[it.first] = it.second + dist;   //set min distance
                pq.push({distance[it.first], it.first}); //push {distance,node} which node get new shortest path
            }
        }
    }

    return distance;
}

int main()
{
    vector<pair<int, int>> adj[5]; //({node,weight})

    adj[0].push_back({1, 2});
    adj[0].push_back({3, 1});

    adj[1].push_back({0, 2});
    adj[1].push_back({2, 4});
    adj[1].push_back({4, 5});

    adj[2].push_back({1, 4});
    adj[2].push_back({3, 3});
    adj[2].push_back({4, 1});

    adj[3].push_back({0, 1});
    adj[3].push_back({2, 3});

    adj[4].push_back({1, 5});
    adj[4].push_back({2, 1});

    vector<int> distance = Dijkstra_Algorithm(5, adj, 0);

    for (int i = 0; i < distance.size(); i++)
        cout << i << " " << distance[i] << "\n";

    return 0;
}