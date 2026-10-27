/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int data;
 *     TreeNode *left;
 *     TreeNode *right;
 *      TreeNode(int val) : data(val) , left(nullptr) , right(nullptr) {}
 * };
 **/

class Solution{
public:
    // T.C O(N2)
    int height(TreeNode* root){
        if(root== NULL){
            return 0;
        }
        int leftHeight=height(root->left);
        int rightHeight=height(root->right);

        return 1 + max(leftHeight,rightHeight);
    }
    bool isBalanced(TreeNode *root){
    	 if(root==NULL){
            return true;
        }

        int leftHeight=height(root->left);
        int rightHeight=height(root->right);

        if(abs(leftHeight-rightHeight) > 1){ // Every node has a height difference of at most 1 between its left and right subtree will be height balanced.
            return false;
        }

        return isBalanced(root->left) && isBalanced(root->right);
    }
};