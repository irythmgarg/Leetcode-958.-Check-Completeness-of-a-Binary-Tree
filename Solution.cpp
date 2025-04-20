class Solution {
public:
    bool isCompleteTree(TreeNode* root) {
        if (!root)
            return true;  // An empty tree is complete

        queue<TreeNode*> q;
        q.push(root);

        bool past = false;  // Flag to indicate if a NULL has been seen

        while (!q.empty()) {
            TreeNode* front = q.front();
            q.pop();

            if (front == NULL) {
                past = true;  // Once a NULL is found, all following nodes must also be NULL
            } else {
                if (past == true)
                    return false;  // If a non-null node is found after a null, it's not complete
                q.push(front->left);  // Push left child (can be NULL)
                q.push(front->right); // Push right child (can be NULL)
            }
        }
        return true;  // If we finish the level-order traversal without issue, it's complete
    }
}; 
