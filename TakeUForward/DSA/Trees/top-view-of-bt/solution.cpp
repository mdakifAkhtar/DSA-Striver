/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int data;
 *     TreeNode *left;
 *     TreeNode *right;
 *      TreeNode(int val) : data(val) , left(nullptr) , right(nullptr) {}
 * };
 **/

class Solution{
    public:
    vector<int> topView(TreeNode *root){
        vector<int>ans;
        if(root== NULL){
            return ans;
        }
        queue<pair<TreeNode*,int>>q;
        map<int,int>nodes;

        q.push({root,0});

        while(!q.empty()){
            auto p=q.front();
            q.pop();
            TreeNode* curr=p.first;
            int hd=p.second;
            
            // If horizontal distance (hd) is not present in the map,
            // insert the current node's data.
            if(nodes.find(hd) == nodes.end()){
                nodes[hd] = curr->data;
            }

            if(curr->left != NULL){
                q.push({curr->left,hd-1});
            }

            if(curr->right != NULL){
                q.push({curr->right,hd+1});
            }
        }

        for(auto it : nodes){
            ans.push_back(it.second);
        }
        return ans;
    }
};