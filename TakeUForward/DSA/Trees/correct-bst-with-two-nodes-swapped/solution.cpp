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
    // T.C O(N)
    // S.C O(H)
    TreeNode* prev=NULL;
    TreeNode* first=NULL;
    TreeNode* second=NULL;
    
    void inorder(TreeNode* root){
        if(root == NULL){
            return;
        }
        inorder(root->left);
        if(prev != NULL && prev->data > root->data){
            if(first == NULL){
                first=prev;
            }
            second=root;
        }
        prev=root;
        inorder(root->right);

    }
    void recoverTree(TreeNode* root) {
       inorder(root);
       swap(first->data,second->data);
    }
};