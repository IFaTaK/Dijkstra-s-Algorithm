#include "dijkstra.h"


int main()
{
    // Create a graph
    std::vector<std::vector<Edge>> EdgesList(5);

    EdgesList[0].push_back({0, 1, 10.5});
    EdgesList[0].push_back({0, 2, 3.7});

    EdgesList[1].push_back({1, 2, 1.2});
    EdgesList[1].push_back({1, 3, 2.1});

    EdgesList[2].push_back({2, 1, 4.6});
    EdgesList[2].push_back({2, 3, 8.4});
    EdgesList[2].push_back({2, 4, 2.8});

    EdgesList[3].push_back({3, 4, 7.5});

    EdgesList[4].push_back({4, 3, 9.3});

    Graph g(EdgesList);

    // Run Dijkstra's algorithm
    std::vector<int> path = g.dijkstra(0, 3);

    // Print shortest path from 0 to 4
    std::cout << "Shortest path from 0 to 4: ";
    for (int node : path)
    {
        std::cout << node << " ";
    }
    std::cout << "\n";

    g.drawGraph();

    return 0;
}
