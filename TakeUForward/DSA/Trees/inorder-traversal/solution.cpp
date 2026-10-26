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
            // Base case
            if(root==NULL){
                return;
            }
            // Step 1: Traverse left subtree
            inOrder(root->left,ans);
            // Step 2: Visit current node
            ans.push_back(root->data);
            // Step 3: Traverse right subtree
            inOrder(root->right,ans);

        }
		vector<int> inorder(TreeNode* root){
	        vector<int>ans;
            inOrder(root,ans);
            return ans;
		}
};