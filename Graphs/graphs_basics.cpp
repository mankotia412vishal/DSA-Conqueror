#include <bits/stdc++.h>
using namespace std;
template<typename T>
class Graph
{
public:
    unordered_map<T, list<T>> adjList;
    void addEdge(T u, T v, bool direction)
    {
        // directed_graph -> 0 direction
        // undirected graph -> 1 direction
        // create an edge from u to v
        adjList[u].push_back(v);
        if (direction == 1)
        {
            // undirected graph
            // create an edge from v to u
            adjList[v].push_back(u);
        }
    }
    void prTAdjacencyList()
    {
        for (auto node : adjList)
        {
            cout << node.first << " -> ";
            for (auto neighbour : node.second)
            {
                cout << neighbour << " ,";
            }
            cout << endl;
        }
    }
};
int main()
{
    // T n;
    // cout<<"Node ?";
    // cin>>n;
    // T edge;
    // cout<<"edge ? ";
    // cin>>edge;

    // undirected graph bna raha hu

    // Graph *obj = new Graph();

    // obj->addEdge(0, 1, 1);
    // obj->addEdge(0, 2, 1);
    // obj->addEdge(1, 2, 1);

    // directed graph bna raha hu

    Graph<int> *obj = new Graph<int>();

    obj->addEdge(0, 1, 0);
    obj->addEdge(0, 2, 0);
    obj->addEdge(1, 2, 0);

    obj->prTAdjacencyList();

    return 0;
}