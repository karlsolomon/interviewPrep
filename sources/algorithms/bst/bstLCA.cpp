Node* lowestCommonAncestor(Node* root, int data1, int data2) {
    // Base case
    if (root == nullptr) {
        return nullptr;
    }

    // If both data1 and data2 are smaller than root, then LCA lies in left subtree
    if (data1 < root->data && data2 < root->data) {
        return lowestCommonAncestor(root->left, data1, data2);
    }

    // If both data1 and data2 are greater than root, then LCA lies in right subtree
    if (data1 > root->data && data2 > root->data) {
        return lowestCommonAncestor(root->right, data1, data2);
    }

    // If one data is on the left and the other is on the right, then root is the LCA
    return root;
}
