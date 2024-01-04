#ifndef DIJKSTRA_H
#define DIJKSTRA_H

#include <vector>
#include <iostream>

struct Edge {
    int src;
    int dest;
    double weight;
};

class Graph {
    private:
    std::vector<std::vector<Edge>> adjList;
    std::vector<int> previous;
    std::vector<double> distances;
    std::vector<bool> visited;
    int numVertices;

    public:
    Graph(std::vector<std::vector<Edge>> adjList);
    int getNumVertices();
    double getEdgeWeight(int src, int dest);
    std::vector<int> getNeighbors(int src);
    void addVertex();
    void addEdge(int src, int dest, double weight);
    void drawGraph();
    std::vector<int> dijkstra(int src, int dest);
};


#endif // DIJKSTRA_H
