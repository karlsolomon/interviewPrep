bool isSame(Node* root1, Node* root2) {
    if (!root1 && !root2) return true;
    if (!root1 || !root2) return false;
    return root1->data == root2->data && isSame(root1->left, root2->left) && isSame(root1->right, root2->right);
}
