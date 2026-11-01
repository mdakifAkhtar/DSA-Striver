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
    // T.C O(N)
    // S.C O(N)
	vector<int> distanceK(TreeNode* root, TreeNode* target, int k){
		vector<int>ans;
        if(root==NULL){
            return ans;
        }
        // Step 1: Store parent of every node
        queue<TreeNode*>q;
        unordered_map<TreeNode*,TreeNode*>parent;

        q.push(root);
        parent[root]=NULL;
        
        // Traverse the tree and create parent mapping
        while(!q.empty()){
            TreeNode* curr=q.front();
            q.pop();
            
            // Store parent of left child
            if(curr->left != NULL){
                parent[curr->left]=curr;
                q.push(curr->left);
            }
            // Store parent of right child
            if(curr->right != NULL){
                parent[curr->right]=curr;
                q.push(curr->right);
            }
        }
        // Step 2: Start BFS from target node
        unordered_map<TreeNode*,bool>visited;
        q.push(target);
        visited[target]=true;

        int distance=0;
        // Traverse nodes level by level
        while(!q.empty()){
            int size=q.size();
            if(distance==k){
                break;
            }
            // Process all nodes at the current distance
            for(int i=0; i<size; i++){
                TreeNode* curr=q.front();
                q.pop();
                
                // Visit left child if not visited
                if(curr->left != NULL && !visited[curr->left]){
                    q.push(curr->left);
                    visited[curr->left]=true;
                }
                
                // Visit right child if not visited
                if(curr->right != NULL && !visited[curr->right]){
                    q.push(curr->right);
                    visited[curr->right]=true;
                }
                // Visit parent if it exists and is not visited
                if(parent[curr] != NULL && !visited[parent[curr]]){
                    q.push(parent[curr]);
                    visited[parent[curr]]=true;
                }
            }
            distance++;
        }
        // Step 3: Collect all nodes at distance K
        while(!q.empty()){
            ans.push_back(q.front()->data);
            q.pop();
        }
        return ans;
    }
};