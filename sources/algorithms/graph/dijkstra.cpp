#include <iostream>
#include <limits>
#include <queue>
#include <vector>

using namespace std;

typedef pair<int, int> Edge;  // (weight, vertex)
/*
 * In this program:
 *
 * - We define a `Graph` class with an adjacency list to store edges as pairs of (weight, vertex).
 *   - The `dijkstra` function initializes distances and uses a priority queue to explore the shortest paths.
 *   - It updates the shortest path estimates and pushes them into the priority queue.
 *   - Finally, it prints the shortest distances from the start vertex to all other vertices.
 *
 */

class Graph {
 public:
    int vertices;
    vector<vector<Edge>> adjList;

    Graph(int v) : vertices(v), adjList(v) {}

    void addEdge(int source, int destination, int weight) {
        adjList[source].push_back(make_pair(weight, destination));
        adjList[destination].push_back(make_pair(weight, source));  // For undirected graph
    }
    // Dijkstra's algorithm, is used to find the shortest paths from a single source vertex to all other vertices
    // in a graph with non-negative edge weights:
    void dijkstra(int start) {
        vector<int> distance(vertices, numeric_limits<int>::max());
        priority_queue<Edge, vector<Edge>, greater<Edge>> pq;

        distance[start] = 0;
        pq.push(make_pair(0, start));

        while (!pq.empty()) {
            int currentVertex = pq.top().second;
            pq.pop();

            for (const auto& edge : adjList[currentVertex]) {
                int weight = edge.first;
                int neighbor = edge.second;

                if (distance[currentVertex] + weight < distance[neighbor]) {
                    distance[neighbor] = distance[currentVertex] + weight;
                    pq.push(make_pair(distance[neighbor], neighbor));
                }
            }
        }

        // Print the distances
        for (int i = 0; i < vertices; ++i) {
            cout << "Distance from vertex " << start << " to vertex " << i << " is " << distance[i] << endl;
        }
    }
};

int main() {
    Graph g(5);
    g.addEdge(0, 1, 10);
    g.addEdge(0, 4, 5);
    g.addEdge(1, 2, 1);
    g.addEdge(1, 4, 2);
    g.addEdge(2, 3, 4);
    g.addEdge(3, 4, 9);
    g.addEdge(3, 0, 7);

    g.dijkstra(0);

    return 0;
}
