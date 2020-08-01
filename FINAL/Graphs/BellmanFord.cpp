#include <bits/stdc++.h>
using namespace std;
struct Edge
{
    int src, dest, weight;
};

// a structure to represent a connected, directed and
// weighted graph
struct Graph
{
    // V-> Number of vertices, E-> Number of edges
    int V, E;

    // graph is represented as an array of edges.
    struct Edge *edge;
};
void printArr(int dist[], int n)
{
    printf("Vertex   Distance from Source\n");
    for (int i = 0; i < n; ++i)
        printf("%d \t\t %d\n", i, dist[i]);
}

// Creates a graph with V vertices and E edges
struct Graph *createGraph(int V, int E)
{
    struct Graph *graph = new Graph;
    graph->V = V;
    graph->E = E;
    graph->edge = new Edge[E];
    return graph;
}
void BellmanFord(struct Graph *graph, int src)
{
    int V = graph->V;
    int E = graph->E;
    vector<int> dist(V, INT_MAX);
    dist[src] = 0;
    for (int i = 1; i <= V - 1; i++)
    {
        for (int j = 0; j < E; j++)
        {
            int u = graph->edge[j].src;
            int v = graph->edge[j].dest;
            int w = graph->edge[j].weight;
            if (dist[u] != INT_MAX && dist[v] > dist[u] + w)
            {
                dist[v] = dist[u] + w;
            }
        }
    }
    // Now we run again and check kahi firse kam toh nahi horra
    for (int j = 0; j < E; j++)
    {
        int u = graph->edge[j].src;
        int v = graph->edge[j].dest;
        int w = graph->edge[j].weight;
        if (dist[u] != INT_MAX && dist[v] > dist[u] + w)
        {
            cout << "Negative Cycle detected" << endl;
            return;
        }
    }
}