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
    int maxSum(TreeNode* root,int &maxisum){
        if(root==NULL){
            return 0;
        }

        int leftSum=max(0,maxSum(root->left,maxisum));
        int rightSum=max(0,maxSum(root->right,maxisum));

        maxisum=max(maxisum,root->data+leftSum+rightSum);

        return root->data + max(leftSum,rightSum);
    }
    int maxPathSum(TreeNode* root) {
        int maxisum=INT_MIN;
        maxSum(root,maxisum);
        return maxisum;
    }
};	