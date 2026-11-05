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

        bool checkBST(TreeNode* root,long long mini, long long maxi){
            if(root==NULL){
                return true;
            }

            if(root->data <= mini || root->data >= maxi){
                return false;
            }

            return checkBST(root->left,mini,root->data) && 
                   checkBST(root->right,root->data,maxi);
        }

		bool isBST(TreeNode* root){
			return checkBST(root,LLONG_MIN,LLONG_MAX);
		}
};