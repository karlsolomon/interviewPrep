bool isBST(Node* root, int min, int max) {
    if (root == nullptr) return true;
    if (root->data < min || root->data > max) return false;
    return isBST(root->left, min, root->data - 1) && isBST(root->right, root->data + 1, max);
}

bool isBST(Node* root) {
    bool res = true;
    if (root == nullptr) {
        return res;
    }
    if (root->left == nullptr && root->right == nullptr) {
        return res;
    }
    return isBST(root, INT_MIN, INT_MAX);
}
