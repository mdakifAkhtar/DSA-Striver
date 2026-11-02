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
    TreeNode* build(vector<int>&preorder,vector<int>&inorder,int start,int end,int &preIndex,unordered_map<int,int>&mp){

        if(start > end){
            return NULL;
        }
        // Create root from preorder
        TreeNode* root=new TreeNode(preorder[preIndex]);
        preIndex++;

        // Find root position in inorder
        int position=mp[root->data];
        // Construct left subtree
        root->left=build(preorder,inorder,start,position-1,preIndex,mp);
        // Construct right subtree
        root->right=build(preorder,inorder,position+1,end,preIndex,mp);

        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int,int>mp;
        // Store inorder elements and their indices
        for(int i=0; i<inorder.size();i++){
            mp[inorder[i]]=i;
        }

        int preIndex=0;
        
        return build(preorder,inorder,0,inorder.size()-1,preIndex,mp);
    }
};