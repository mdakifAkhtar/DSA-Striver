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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        // If both nodes are NULL, they are identical
        if(p==NULL && q== NULL){
            return true;
        }
        // If only one node is NULL, trees are different
        if(p==NULL || q== NULL){
            return false;
        }
        // If node values are different, trees are different
        if(p->data != q->data){
            return false;
        }
        // Recursively compare left and right subtrees
        return isSameTree(p->left,q->left) && isSameTree(p->right,q->right);
    }
};