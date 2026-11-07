/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int data;
 *     TreeNode *left;
 *     TreeNode *right;
 *      TreeNode(int val) : data(val) , left(nullptr) , right(nullptr) {}
 * };
 **/

class BSTIterator{
	public:
        stack<TreeNode*>st;
        // Push all left nodes into stack.
        void pushAllLeft(TreeNode* root){
            while(root != NULL){
                st.push(root);
                root=root->left;
            }
        }
		BSTIterator(TreeNode* root){
            // Initialize stack with the leftmost path.
            pushAllLeft(root);
			
		}
		
		bool hasNext(){


        // If stack is not empty, more elements exist.
            return !st.empty();
			
		}
		
		int next(){
            // Get the smallest available element.
            TreeNode* node=st.top();
            st.pop();
            
            // Process the right subtree.
            pushAllLeft(node->right);
            return node->data;
		}
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */