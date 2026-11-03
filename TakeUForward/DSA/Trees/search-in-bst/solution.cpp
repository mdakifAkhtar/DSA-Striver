/**
 * Definition for a binary tree node.
 * class TreeNode {
 *     int data;
 *     TreeNode *left;
 *     TreeNode *right;
 *      TreeNode(int val) : data(val) , left(nullptr) , right(nullptr) {}
 * };
 **/

class Solution {	
public:	
    TreeNode* searchBST(TreeNode* root, int val) {
    	if(root==NULL){
            return NULL;
        }
        if(root->data == val){
            return root;
        }

        else if(root->data > val){
            return searchBST(root->left,val);
        }

        else{
            return searchBST(root->right,val);
        }
    }
};