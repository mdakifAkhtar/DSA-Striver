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
    void rightSide(TreeNode* root, vector<int>&ans, int level){
        if(root==NULL){
            return;
        }
        // If this is the first node visited at this level, add it
        if(level==ans.size()){
            ans.push_back(root->data);
        }
        // Visit the right subtree first to get the right-side view
        rightSide(root->right,ans,level+1);
        // Then visit the left subtree
        rightSide(root->left,ans,level+1);
    }

    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans;
        int level=0;
        rightSide(root,ans,level);
        return ans;
    }
};