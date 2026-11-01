/* class TreeNode {
       int val;
       TreeNode *left, *right;
       TreeNode(int x) : val(x), left(NULL), right(NULL) {}
   };
*/

class Solution {
public:
    // T.C O(N)
    // S.C O(N)
    void flatten(TreeNode* root) {
        if(root==NULL){
            return;
        }
        stack<TreeNode*>st;
        st.push(root);

        while(!st.empty()){
            TreeNode* curr=st.top();
            st.pop();

            if(curr->right != NULL){
                st.push(curr->right);
            }

            if(curr->left != NULL){
                st.push(curr->left);
            }

            if(!st.empty()){
                curr->right=st.top();
            }
        }
    }
};
