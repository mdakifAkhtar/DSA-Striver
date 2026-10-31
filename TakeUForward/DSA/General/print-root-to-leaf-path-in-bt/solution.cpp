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
        //T.C 0(N*H)
        void rootTraversal(TreeNode* root,vector<int>&path,vector<vector<int>>&ans){
            if(root==NULL){
                return;
            }
            path.push_back(root->data);

            if(root->left == NULL && root->right==NULL){
                ans.push_back(path);
            }
            else{
                rootTraversal(root->left,path,ans);
                rootTraversal(root->right,path,ans);
            }
            // Backtracking
            path.pop_back();
        }
		vector<vector<int>> allRootToLeaf(TreeNode* root) {
            vector<vector<int>>ans;
            vector<int>path;
            
            rootTraversal(root,path,ans);  
            return ans;
		}
};