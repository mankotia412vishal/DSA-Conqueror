#include <bits/stdc++.h>
using namespace std;
class Graph
{
public:
    unordered_map<int, list<int>> adjList;

    void addEdge(int u, int v, bool direction)
    {
        // 1->undirected graph
        // 0->directed graph
        adjList[u].push_back(v);
        if (direction == 1)
        {
            adjList[v].push_back(u);
        }
    }
    void bfs(int src, unordered_map<int, bool> &visited)
    {
        queue<int> q;

        q.push(src);
        visited[src] = true;
        while (!q.empty())
        {
            // step 1
            int ele = q.front();
            // step 2
            q.pop();
            // step 3
            cout << ele << " ";

            // insert neighbour
            for (auto node : adjList[ele])
            {
                if (!visited[node])
                {
                    q.push(node);
                    visited[node] = true;
                }
            }
        }
    }
    void dfs(int src, unordered_map<int, bool> &visited2)
    {

        // step 1
        // print src
        cout << src << " ,";
        visited2[src] = true;
        for (auto neigbour : adjList[src])
        {
            if (!visited2[neigbour])
            {
                dfs(neigbour, visited2);
            }
        }
    }
};

int main()
{
    Graph g;
    g.addEdge(1, 0, 1);
    g.addEdge(1, 2, 1);
    g.addEdge(1, 3, 1);
    g.addEdge(3, 5, 1);
    g.addEdge(3, 7, 1);
    g.addEdge(7, 6, 1);
    g.addEdge(6, 4, 1);
    unordered_map<int, bool> visited;
    cout << "Printing the BFS Traversal\n";

    for (int i = 0; i <= 7; i++)
    {
        if (!visited[i])
        {
            g.bfs(i, visited);
        }
    }
    cout << "Printing the DFS Traversal\n";
    unordered_map<int, bool> visited2;
    for (int i = 0; i <= 7; i++)
    {
        if (!visited2[i])
        {
            g.dfs(i, visited2);
        }
    }

    // g.bfs(0);

    return 0;
}