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
    TreeNode* build(vector<int>&inorder,vector<int>&postorder,int start,int end,int &postIndex,unordered_map<int,int>&mp){

        if(start > end){
            return NULL;
        }
        // Create root from postorder (rightmost element)
        TreeNode* root=new TreeNode(postorder[postIndex]);
        // Move index backwards
        postIndex--;

        // Find root position in inorder
        int position=mp[root->data];
        
        // Build right subtree first
        root->right=build(inorder,postorder,position+1,end,postIndex,mp);
        // Build left subtree
        root->left=build(inorder,postorder,start,position-1,postIndex,mp);

        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        unordered_map<int,int>mp;
        for(int i=0; i<inorder.size(); i++){
            mp[inorder[i]]=i;
        }
        // Start from last index of postorder
        int postIndex=postorder.size()-1;

        return build(inorder,postorder,0,inorder.size()-1,postIndex,mp);
    }
};