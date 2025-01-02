Node* deleteBSTNode(Node* root, int data) {
    if (root == nullptr) return root;
    if (root->data == data) {
        // Only 1 node (root)
        if (root->left == nullptr && root->right == nullptr) {
            delete root;
            root = nullptr;
        }
        // Only 1 child (right)
        else if (root->left == nullptr) {
            Node* temp = root->right;
            delete root;
            root = temp;
        }
        // Only 1 child (left)
        else if (root->right == nullptr) {
            Node* temp = root->left;
            delete root;
            root = temp;
        }
        // Both children exist. Take either min from right sub-tree (implemented here) or max from left sub-tree and set
        // to deleted node's position
        else {
            Node* temp = root->right;
            while (temp->left != nullptr) {
                temp = temp->left;
            }
            root->data = temp->data;
            root->right = deleteBSTNode(root->right, temp->data);
        }
    }
    return root;
}
