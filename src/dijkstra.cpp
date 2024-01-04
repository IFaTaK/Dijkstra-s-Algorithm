#include "dijkstra.h"

// Constructor
Graph::Graph(std::vector<std::vector<Edge>> adjList) {
    this->adjList = adjList;
    this->numVertices = adjList.size();
    this->previous = std::vector<int>(this->numVertices, -1);
    this->distances = std::vector<double>(this->numVertices, __DBL_MAX__);
    this->visited = std::vector<bool>(this->numVertices, false);
}

// Public methods

// Returns the number of vertices in the graph
int Graph::getNumVertices() {
    return this->numVertices;
}

double Graph::getEdgeWeight(int src, int dest) {
    for (Edge e : this->adjList[src]) {
        if (e.dest == dest) {
            return e.weight;
        }
    }
    return __DBL_MAX__;
}

// Returns the neighbors of a vertex
std::vector<int> Graph::getNeighbors(int src) {
    std::vector<int> neighbors;
    for (Edge e : this->adjList[src]) {
        neighbors.push_back(e.dest);
    }
    return neighbors;
}

// Adds a new vertex to the graph
void Graph::addVertex() {
    this->numVertices++;
    this->adjList.push_back(std::vector<Edge>());
}

// Adds an edge to the graph
void Graph::addEdge(int src, int dest, double weight) {
    this->adjList[src].push_back(Edge{src, dest, weight});
}

void Graph::drawGraph() {

    for (int i = 0; i < numVertices; i++) {
        std::cout << i << " -> "; 
        for (auto edge : adjList[i]) {
            std::cout << edge.dest << " (" << edge.weight << ")" <<" "; 
        }
        std::cout << std::endl;
    }

}

std::vector<int> Graph::dijkstra(int src, int dest)
{
    distances[src] = 0;

    while (!visited[dest])
    {
        int minVertex = -1;
        double minDist = __DBL_MAX__;

        for (int i = 0; i < numVertices; i++)
        {
            if (!visited[i] && distances[i] < minDist)
            {
                minDist = distances[i];
                minVertex = i;
            }
        }

        if (minVertex == -1)
            break;

        visited[minVertex] = true;

        for (int neighbor : getNeighbors(minVertex))
        {
            double edgeWeight = getEdgeWeight(minVertex, neighbor);
            if (distances[neighbor] > distances[minVertex] + edgeWeight)
            {
                distances[neighbor] = distances[minVertex] + edgeWeight;
                previous[neighbor] = minVertex;
            }
        }
    }

    std::vector<int> path;
    int curr = dest;
    while (curr != -1)
    {
        path.push_back(curr);
        curr = previous[curr];
    }
    std::reverse(path.begin(), path.end());

    return path;
}
