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
    long long int widthOfBinaryTree(TreeNode* root) {
        long long ans=0;
        if(root==NULL){
            return 0;
        }
        queue<pair<TreeNode*,long long>>q;
        q.push({root,0});

        while(!q.empty()){
            int size=q.size();
            long long minIndex=q.front().second;
            long long first;
            long long last;

            for(int i=0; i<size; i++){
                auto p=q.front();
                q.pop();

                TreeNode* curr=p.first;
                // Normalize index to prevent overflow
                long long index=p.second - minIndex;

                // Store leftmost node index
                if(i==0){
                    first=index;
                }
                // Store rightmost node index
                if(i==size-1){
                    last=index;
                }
                
                // Calculate left child index
                if(curr->left != NULL){
                    q.push({curr->left,2*index+1});
                }

                // Calculate right child index
                if(curr->right != NULL){
                    q.push({curr->right,2*index + 2});
                }
            }
            // Calculate width of current level
            ans=max(ans,last-first+1);
        }
        return ans;
    }
};