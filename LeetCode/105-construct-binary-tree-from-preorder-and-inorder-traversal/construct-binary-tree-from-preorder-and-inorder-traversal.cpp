/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
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
        int position=mp[root->val];
        // Construct left subtree
        root->left=build(preorder,inorder,start,position-1,preIndex,mp);
        // Construct right subtree
        root->right=build(preorder,inorder,position+1,end,preIndex,mp);

        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int,int>mp;
        // Store inorder elements and their indices
        for(int i=0; i< inorder.size(); i++){
            mp[inorder[i]]=i;
        }
        int preIndex=0;
        return build(preorder,inorder,0,inorder.size()-1,preIndex,mp);
    }
};