/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
         // Base case: If node is NULL, depth is 0
        if(root== NULL){
            return 0;
        }
        // Recursively calculate the maximum depth of the left subtree
        int leftDepth=maxDepth(root->left);
        // Recursively calculate the maximum depth of the right subtree
        int rightDepth=maxDepth(root->right);
        // Add 1 for the current node and choose the deeper subtree
        return 1 + max(leftDepth,rightDepth);
    }
};