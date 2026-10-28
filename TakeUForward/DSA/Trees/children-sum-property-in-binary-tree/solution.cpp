/* class TreeNode {
       int val;
       TreeNode *left, *right;
       TreeNode(int x) : val(x), left(NULL), right(NULL) {}
   };
*/

class Solution {
public:
    bool checkChildrenSum(TreeNode* root) {
        if(root==NULL){
            return true;
        }

        if(root->left== NULL && root->right==NULL){
            return true;
        }

        int left=(root->left != NULL)? root->left->val : 0;
        int right=(root->right != NULL)? root->right->val : 0;

        if(root->val != left + right){
            return false;
        }
            return checkChildrenSum(root->left) && checkChildrenSum(root->right);
    }
};
