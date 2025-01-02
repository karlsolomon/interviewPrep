void insertNode(Node* root, int data) {
    if (root == nullptr) {
        root = new Node(data);
    } else {
        if (data < root->data) {
            insertNode(root->left, data);
        } else {
            insertNode(root->right, data);
        }
    }
}
