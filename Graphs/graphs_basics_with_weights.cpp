#include <bits/stdc++.h>
using namespace std;
class Graph
{
public:
    unordered_map<int, list<pair<int ,int>>> adjList;
    void addEdge(int u, int v,int weight, bool direction)
    {
        // directed_graph -> 0 direction
        // undirected graph -> 1 direction
        // create an edge from u to v
        adjList[u].push_back({v,weight});
        if (direction == 1)
        {
            // undirected graph
            // create an edge from v to u
            adjList[v].push_back({u,weight});
        }
    }
    void printAdjacencyList()
    {
        for (auto node : adjList)
        {
            cout << node.first << " -> ";
            for (auto neighbour : node.second)
            {
                cout<<"("<<neighbour.first<<","<<neighbour.second<<"),";
            }
            cout << endl;
        }
    }
};
int main()
{
    // int n;
    // cout<<"Node ?";
    // cin>>n;
    // int edge;
    // cout<<"edge ? ";
    // cin>>edge;

    // undirected graph bna raha hu

    // Graph *obj = new Graph();

    // obj->addEdge(0, 1, 1);
    // obj->addEdge(0, 2, 1);
    // obj->addEdge(1, 2, 1);

    // directed graph bna raha hu

    Graph *obj = new Graph();

    obj->addEdge(0, 1,5, 0);
    obj->addEdge(0, 2,6, 0);
    obj->addEdge(1, 2,8, 0);

    obj->printAdjacencyList();

    return 0;
}