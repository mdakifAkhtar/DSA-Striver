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
    // O(N)
    TreeNode* buildBST(vector<int>&preorder, int &i,int bound){
        // If index exceeds array size or current value exceeds the upper bound,\
        // this node cannot be inserted in the current subtree.
        if(i >= preorder.size() || bound < preorder[i]){
            return NULL;
        }

        // Create a new node using the current preorder element.
        TreeNode* root = new TreeNode(preorder[i]);
        i++;

        // All values in the left subtree must be smaller than root->data.
        root->left=buildBST(preorder,i,root->val);
        // Values must be smaller than the upper bound inherited from the parent.
        root->right=buildBST(preorder,i,bound);

        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int i=0;
        return buildBST(preorder,i,INT_MAX);
    }
};