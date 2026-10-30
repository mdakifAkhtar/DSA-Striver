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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> ans;
        // Store nodes based on column, row, and sorted node values.
        map<int,map<int,multiset<int>>> nodes; //Column → Row → Node Values
        // Queue stores {node, {column, row(level)}} for BFS traversal.
        queue<pair<TreeNode*,pair<int,int>>> q;

         // Root starts at column 0 and row 0.
        if(root==NULL){
            return ans;
        }
        q.push({root,{0,0}});

        while(!q.empty()){
            auto p=q.front();
            q.pop();

            TreeNode* curr=p.first;
            int col=p.second.first;     // Column
            int row= p.second.second;   // Row

            nodes[col][row].insert(curr->val);

            if(curr->left != NULL){
                q.push({curr->left,{col-1,row+1}});
            }

            if(curr->right != NULL){
                q.push({curr->right,{col+1,row+1}});
            }
        }

        for(auto col : nodes){
            vector<int>temp;
             // Traverse rows from top to bottom.
            for(auto row: col.second){
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