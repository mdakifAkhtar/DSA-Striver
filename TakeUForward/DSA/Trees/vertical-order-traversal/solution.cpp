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
    vector<vector<int> > verticalTraversal(TreeNode* root) {
        vector<vector<int>>ans;
        // Queue stores {node, {column, row}} for BFS traversal.
    	queue<pair<TreeNode*,pair<int,int>>>q;
        // Store nodes based on column, row, and sorted node values.
        map<int,map<int,multiset<int>>> nodes;

        if(root== NULL){
            return ans;
        }
        // Root starts at column 0 and row 0.
        q.push({root,{0,0}});

        while(!q.empty()){
            // Get the front node and remove it from the queue.
            auto p=q.front();
            q.pop();
            TreeNode* curr=p.first;
            int col=p.second.first;
            int row=p.second.second;
            // Store the node value at its column and row.
            nodes[col][row].insert(curr->data);
            // Left child: column decreases, row increases.
            if(curr->left != NULL){
                q.push({curr->left,{col-1,row+1}});
            }
            // Right child: column increases, row increases.
            if(curr->right != NULL){
                q.push({curr->right,{col+1,row+1}});
            }
        }
        // Traverse columns from left to right.
        for(auto col:nodes){
            vector<int>temp;
            // Traverse rows from top to bottom.
            for(auto row : col.second){
                // Values at the same position are sorted automatically.
                for(auto value : row.second){
                    temp.push_back(value);
                }
            }
            ans.push_back(temp);
        }
        return ans;
    }
};