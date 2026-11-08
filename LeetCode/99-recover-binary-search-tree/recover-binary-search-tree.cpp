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
    // T.C O(N)
    // S.C O(H)
    TreeNode* first = NULL;
    TreeNode* second= NULL;
    TreeNode* middle=NULL;
    TreeNode* prev  = NULL;

    void inorder(TreeNode* root){
        if(root == NULL){
            return;
        }

        inorder(root->left);
        if(prev != NULL && prev->val > root->val){
            if(first == NULL){
                first=prev;
                middle=root;
            }
            else{
                second = root;
            }
        }
        prev=root;
        inorder(root->right);
    }

    void recoverTree(TreeNode* root) {
        inorder(root);
        if(second != NULL){
            swap(first->val,second->val);
        }
        else{
            swap(first->val,middle->val);
        }
    }
};