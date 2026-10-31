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
    int leftHeight(TreeNode* root){
        int height=0;

        while(root != NULL){
            height++;
            root=root->left;
        }
        return height;
    }

    int rightHeight(TreeNode* root){
        int height=0;

        while(root != NULL){
            height++;
            root=root->right;
        }
        return height;
    }
    int countNodes(TreeNode* root) {
        if(root == NULL){
            return 0;
        }
        // Calculate left and right heights
        int lh=leftHeight(root);
        int rh=rightHeight(root);
        
        // If both heights are equal,
        // the tree is perfect
        if(lh==rh){
            return (1 << lh)-1; // 2^lh-1 formula for complete binary tree number of nodes.
        }
        // Otherwise, recursively count both subtrees
        return 1 + countNodes(root->left) + countNodes(root->right);
    }
};