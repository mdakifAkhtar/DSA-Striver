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
        void postOrder(TreeNode* root,vector<int>&ans){
            if(root==NULL){
                return;
            }
            postOrder(root->left,ans);
            postOrder(root->right,ans);
            ans.push_back(root->data);
        }
		vector<int> postorder(TreeNode* root){
	        vector<int>ans;
            postOrder(root,ans);
            return ans;
		}
};