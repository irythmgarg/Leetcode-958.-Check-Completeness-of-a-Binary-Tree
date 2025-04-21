class Solution {
public:
    // Helper to count total nodes in the tree
    int countnodes(TreeNode* root) {
        if (!root)
            return 0;
        return 1 + countnodes(root->left) + countnodes(root->right);
    }

    // Helper to check if the binary tree is complete using index logic
    bool isComplete(TreeNode* root, int nodes, int ind) {
        if (!root)
            return true;
        if (ind > nodes)
            return false;  // Node index exceeded total node count, not complete
        return isComplete(root->left, nodes, 2 * ind) &&
               isComplete(root->right, nodes, 2 * ind + 1);
    }

    // Main function
    bool isCompleteTree(TreeNode* root) {
        if (!root)
            return true;
        int nodes = countnodes(root);  // Total number of nodes in the tree
        return isComplete(root, nodes, 1);  // Start index from 1
    }
};
