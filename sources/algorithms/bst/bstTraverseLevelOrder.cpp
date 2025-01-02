/*
 * - We use a `std::queue<Node*>` to keep track of nodes to visit.
 * - We start by pushing the root node into the queue.
 * - While the queue is not empty, we:
 *   - Dequeue the front node, process it by adding its data to the result queue.
 *   - Enqueue its left and right children if they exist.
 * - This process continues until all nodes have been visited, resulting in a level-order traversal of the BST.
 */

std::queue<int> traverseBSTLevelOrder(Node* root) {
    std::queue<int> result;
    if (root == nullptr) {
        return result;
    }

    std::queue<Node*> nodeQueue;
    nodeQueue.push(root);

    while (!nodeQueue.empty()) {
        Node* current = nodeQueue.front();
        nodeQueue.pop();
        result.push(current->data);

        if (current->left != nullptr) {
            nodeQueue.push(current->left);
        }
        if (current->right != nullptr) {
            nodeQueue.push(current->right);
        }
    }

    return result;
}
