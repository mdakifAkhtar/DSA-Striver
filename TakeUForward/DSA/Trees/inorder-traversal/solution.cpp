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
        void inOrder(TreeNode* root,vector<int>&ans){
            if(root==NULL){
                return;
            }
            inOrder(root->left,ans);
            ans.push_back(root->data);
            inOrder(root->right,ans);

        }
		vector<int> inorder(TreeNode* root){
	        vector<int>ans;
            inOrder(root,ans);
            return ans;
		}
};