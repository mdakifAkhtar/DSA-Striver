/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode* left;
 *     TreeNode* right;
 * };
 */

class Solution {
public:
    vector<int> findMinMax(TreeNode* root) {
        int mini=INT_MAX;
        int maxi=INT_MIN;

        if(root==NULL){
            return {};
        }

        TreeNode* curr=root;

        // Find minimum (leftmost node)
        while(curr != NULL){
            mini=curr->val;
            curr=curr->left;
        }
        curr=root; // reset curr
        // Find maximum (rightmost node)
        while(curr != NULL){
            maxi=curr->val;
            curr=curr->right;
        }

        return {mini,maxi};
    }
};