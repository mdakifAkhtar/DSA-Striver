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
        if(root==NULL){
            return 0;
        }
        // Calculate left and right heights
        int lh=leftHeight(root);
        int rh=rightHeight(root);
        
        // If both heights are equal,
        // the tree is perfect
        if(lh==rh){    //perfect binary tree: N = 2^h - 1
            return (1 << lh)-1; // 2^lh-1
        }

        // Otherwise, recursively count both subtrees
        return 1 + countNodes(root->left) + countNodes(root->right);
    }
};