/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int data;
 *     TreeNode *left;
 *     TreeNode *right;
 *      TreeNode(int val) : data(val) , left(nullptr) , right(nullptr) {}
 * };
 **/

class Solution {
public:
    int isMirror(TreeNode* left,TreeNode* right){
        if(left==NULL && right == NULL){
            return true;
        }

        if(left == NULL || right == NULL){
            return false;
        }

        if(left->data != right->data){
            return false;
        }
        // Compare outer children and inner children recursively
        return isMirror(left->left,right->right) &&
               isMirror(left->right,right->left);
    }
    bool isSymmetric(TreeNode* root) {
        if(root==NULL){
            return true;
        }
        // Check whether the left and right subtrees are mirror images
        return isMirror(root->left,root->right);
    }
};