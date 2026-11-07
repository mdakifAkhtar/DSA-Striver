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
        // T.C O(N)
		bool twoSumBST(TreeNode* root, int k){
			if(root==NULL){
                return false;
            }
            unordered_set<int>st;
            queue<TreeNode*>q;
            q.push(root);

            while(!q.empty()){
                TreeNode* curr=q.front();
                q.pop();

                int need=k-curr->data;
                if(st.find(need) != st.end()){
                    return true;
                }
                st.insert(curr->data);

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