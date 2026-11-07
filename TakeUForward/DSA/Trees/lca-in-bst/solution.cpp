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
		TreeNode* lca(TreeNode* root, int p, int q){
	        if(root==NULL){
                return NULL;
            }

            int curr=root->data;
            // Both nodes are in the right subtree
            if(curr < p && curr < q){
                return lca(root->right,p,q);
            }
            // Both nodes are in the left subtree
            if(curr > p && curr > q){
                return lca(root->left,p,q);
            }
            // Split point: current node is the LCA
            return root;
		}
};