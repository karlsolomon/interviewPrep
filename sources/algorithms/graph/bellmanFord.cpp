#include <iostream>
#include <limits>
#include <vector>
/*
 * - We define a `Graph` class with a list of `Edge` structures, each containing a source, destination, and weight.
 *   - The `bellmanFord` function initializes distances and relaxes all edges |V| - 1 times, where |V| is the number of
 * vertices.
 *   - It checks for negative-weight cycles by attempting one more relaxation.
 *   - If a negative-weight cycle is detected, it prints a message.
 *   - Otherwise, it prints the shortest distances from the start vertex to all other vertices.
 */

struct Edge {
    int source, destination, weight;
};

class Graph {
 public:
    int vertices;
    std::vector<Edge> edges;

    Graph(int v) : vertices(v) {}

    void addEdge(int source, int destination, int weight) { edges.push_back({source, destination, weight}); }
    // The Bellman-Ford algorithm, is used to find the shortest paths from a single source vertex to all other vertices
    // in a graph. The algorithm can handle graphs with negative weight edges:
    void bellmanFord(int start) {
        std::vector<int> distance(vertices, std::numeric_limits<int>::max());
        distance[start] = 0;

        // Relax edges |V| - 1 times
        for (int i = 0; i < vertices - 1; ++i) {
            for (const auto& edge : edges) {
                if (distance[edge.source] != std::numeric_limits<int>::max() &&
                    distance[edge.source] + edge.weight < distance[edge.destination]) {
                    distance[edge.destination] = distance[edge.source] + edge.weight;
                }
            }
        }

        // Check for negative-weight cycles
        for (const auto& edge : edges) {
            if (distance[edge.source] != std::numeric_limits<int>::max() &&
                distance[edge.source] + edge.weight < distance[edge.destination]) {
                std::cout << "Graph contains a negative-weight cycle" << std::endl;
                return;
            }
        }

        // Print the distances
        for (int i = 0; i < vertices; ++i) {
            std::cout << "Distance from vertex " << start << " to vertex " << i << " is " << distance[i] << std::endl;
        }
    }
};

int main() {
    Graph g(5);
    g.addEdge(0, 1, -1);
    g.addEdge(0, 2, 4);
    g.addEdge(1, 2, 3);
    g.addEdge(1, 3, 2);
    g.addEdge(1, 4, 2);
    g.addEdge(3, 2, 5);
    g.addEdge(3, 1, 1);
    g.addEdge(4, 3, -3);

    g.bellmanFord(0);

    return 0;
}
