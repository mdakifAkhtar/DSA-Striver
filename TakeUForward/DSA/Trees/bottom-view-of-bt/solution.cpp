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
    // T.C (N log N)
    vector <int> bottomView(TreeNode *root){
    	vector<int>ans;

        if(root==NULL){
            return ans;
        }
        queue<pair<TreeNode*,int>>q; // Stores the node and its horizontal distance (HD)
        map<int,int>node;            // Maps horizontal distance to the node's value
        q.push({root,0});

        while(!q.empty()){
            auto p=q.front();// Get the first pair from queue front
            q.pop();

            TreeNode* curr=p.first; // Extract the node
            int hd=p.second; // hd means horizontal distance.
            
            // Update the bottom-most node at this horizontal distance
            node[hd]=curr->data;  // Update the map

            if(curr->left != NULL){
                q.push({curr->left,hd-1});
            }

            if(curr->right != NULL){
                q.push({curr->right,hd+1});
            }
        }
        // Map sorts horizontal distances from left to right automatic ascending order
        for(auto it : node){
            ans.push_back(it.second);
        }
        return ans;
    }
};