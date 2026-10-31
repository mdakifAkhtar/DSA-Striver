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
    // T.C O(N).
    void countNode(TreeNode* root,int &count){
        if(root==NULL){
            return;
        }
        count++;

        countNode(root->left,count);
        countNode(root->right,count);

    }
    int countNodes(TreeNode* root) { 
        int count=0;
        countNode(root,count);
        return count;
    }
};