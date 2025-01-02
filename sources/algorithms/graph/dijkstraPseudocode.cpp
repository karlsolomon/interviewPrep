function Dijkstra(Graph, source):
    // Initialize distances and priority queue
    create vertex set Q
    for each vertex v in Graph:
        distance[v] ← INFINITY
        previous[v] ← UNDEFINED
        add v to Q
    distance[source] ← 0

    while Q is not empty:
        // Get the vertex with the smallest distance
        u ← vertex in Q with min distance[u]
        remove u from Q

        for each neighbor v of u:
            alt ← distance[u] + length(u, v)
            if alt < distance[v]:
                distance[v] ← alt
                previous[v] ← u

    return distance, previous
/*

In this pseudo-code:

- `Graph` is the input graph, and `source` is the starting vertex.
- `distance` is an array that holds the shortest distance from the source to each vertex.
- `previous` is an array that holds the previous vertex on the shortest path from the source.
- `Q` is a set of all vertices in the graph.
- The algorithm iteratively selects the vertex `u` with the smallest tentative distance, updates the distances to its neighbors, and removes `u` from the set `Q`.
- The process continues until all vertices have been processed, resulting in the shortest path distances from the source to all other vertices.

*/
