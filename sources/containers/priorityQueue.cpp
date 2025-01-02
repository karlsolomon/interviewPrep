#include <iostream>
#include <queue>
#include <vector>

int main() {
    // Create a priority queue (max-heap by default)
    std::priority_queue<int> pq;

    // Insert elements into the priority queue
    pq.push(10);
    pq.push(5);
    pq.push(20);
    pq.push(15);

    // The priority queue will arrange elements in descending order
    // Result: pq = {20, 15, 10, 5}

    // Access and remove elements from the priority queue
    while (!pq.empty()) {
        int top = pq.top();  // Access the top element
        pq.pop();            // Remove the top element
        // Result: top = 20, then 15, then 10, then 5
    }

    return 0;
}
