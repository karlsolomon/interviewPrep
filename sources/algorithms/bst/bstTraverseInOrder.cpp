std::vector<int> bstTraverseInOrder(Node* root) {
    std::vector<int> res;
    if (root == nullptr) return res;
    res = bstTraverseInOrder(root->left);
    res.push_back(root->data);
    std::vector<int> right = bstTraverseInOrder(root->right);
    res.insert(res.end(), right.begin(), right.end());
}
