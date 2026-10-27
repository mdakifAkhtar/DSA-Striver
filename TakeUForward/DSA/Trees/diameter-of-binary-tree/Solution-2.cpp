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
    int height(TreeNode* root,int &diameter){
        if(root==NULL){
            return 0;
        }

        int leftHeight=height(root->left,diameter);

        int rightHeight=height(root->right,diameter);

        diameter=max(diameter,leftHeight+rightHeight);

        return 1+max(leftHeight,rightHeight);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter=0;
        height(root,diameter);
        return diameter;
    }
};