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
    // S.C 0(N)
    int widthOfBinaryTree(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        long long ans=0;
        queue<pair<TreeNode*,long long>> q;
        q.push({root,0});

        while(!q.empty()){
            int size=q.size();
            long long minIndex =q.front().second;
            long long first;
            long long last;

            for(int i=0; i<size; i++){
                auto p=q.front();
                q.pop();

                TreeNode* curr=p.first;
                long long index=p.second- minIndex;

                if(i==0){
                    first=index;
                }
                if(i==size-1){
                    last=index;
                }

                if(curr->left != NULL){
                    q.push({curr->left,2*index+1});
                }

                if(curr->right != NULL){
                    q.push({curr->right,2*index+2});
                }

            }
            ans=max(ans,last-first+1);
        }
        return ans;
        
    }
};