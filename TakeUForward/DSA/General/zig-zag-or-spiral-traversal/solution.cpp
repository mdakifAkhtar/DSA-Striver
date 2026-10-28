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
    vector<vector<int> > zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;

        if(root==NULL){
            return ans;
        }

        queue<TreeNode*>q;
        q.push(root);

        bool leftToright=true;

        while(!q.empty()){
            int size=q.size();
            vector<int>level(size); // initilize with size 0;

            for(int i=0; i<size; i++){
                TreeNode* node=q.front();
                q.pop();

                int index=leftToright ? i : size-1-i;
                level[index]=node->data;

                if(node->left != NULL){
                    q.push(node->left);
                }

                if(node->right != NULL){
                    q.push(node->right);
                }
            }
            ans.push_back(level);
            leftToright=!leftToright;
        }
        return ans;
    }
};