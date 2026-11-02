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
    TreeNode* build(vector<int>&inorder,vector<int>&postorder,int start,int end,int &postIndex,unordered_map<int,int>&mp){
        // Base case
        if(start > end){
            return NULL;
        }

        // Create root from postorder (rightmost element)
        TreeNode* root=new TreeNode(postorder[postIndex]);
        // Move index backwards
        postIndex--;
        // Find root position in inorder
        int position=mp[root->val];


        

        // Build right subtree first
        root->right=build(inorder,postorder,position+1,end,postIndex,mp);
        // Build left subtree
        root->left=build(inorder,postorder,start,position-1,postIndex,mp);

        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        unordered_map<int,int>mp;
        // Store inorder values and their indices
        for(int i=0; i<inorder.size();i++){
            mp[inorder[i]]=i;
        }

        // Start from last index of postorder
        int postIndex=postorder.size()-1;
        return build(inorder,postorder,0,inorder.size()-1,postIndex,mp);
        
    }
};