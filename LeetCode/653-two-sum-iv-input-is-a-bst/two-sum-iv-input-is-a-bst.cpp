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
    bool findTarget(TreeNode* root, int k) {
        if(root==NULL){
            return false;
        }
        unordered_set<int>st;
        queue<TreeNode*>q;
        q.push(root);

        while(!q.empty()){
            TreeNode* curr=q.front();
            q.pop();

            int need=k-curr->val;

            if(st.find(need) != st.end()){
                return true;
            }
            st.insert(curr->val);

            if(curr->left != NULL){
                q.push(curr->left);
            }
            if(curr->right != NULL){
                q.push(curr->right);
            }
        }
        return false;
    }
};