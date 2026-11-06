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
    TreeNode* helper(TreeNode* root){
        if(root->left == NULL){
            return root->right;
        }
        if(root->right == NULL){
            return root->left;
        }

        TreeNode* leftChild=root->left;
        TreeNode* lastLeft=findLastLeft(root->right);
        lastLeft->left=leftChild;

        return root->right;
    }

    TreeNode* findLastLeft(TreeNode* root){
        while(root->left != NULL){
            root=root->left;
        }
        return root;
    }

    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL){
            return NULL;
        }
        if(root->data==key){
            return helper(root);
        }

        TreeNode* curr=root;
        while(curr != NULL){
            if(curr->data > key){
                if(curr->left != NULL && curr->left->data == key){
                    curr->left =helper(curr->left);
                    break;
                }
                else{
                    curr=curr->left;
                }
            }
            else{
                if(curr->right != NULL && curr->right->data==key){
                    curr->right=helper(curr->right);
                    break;
                }
                else{
                    curr=curr->right;
                }
            }
        }
        return root;
    }
};