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
    // O(N)
    TreeNode* build(vector<int>&preorder,int &i,int bound){
        // If index exceeds array size or current value exceeds the upper bound,
        if(preorder[i] > bound || i >= preorder.size()){
            return NULL;
        }

        TreeNode* root= new TreeNode(preorder[i]);
        i++;
        // All values in the left subtree must be smaller than root->data.
        root->left=build(preorder,i,root->data);
        // Values must be smaller than the upper bound inherited from the parent.
        root->right=build(preorder,i,bound);

        return root;
    }

    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int i=0;
        return build(preorder,i,INT_MAX);
    }
};