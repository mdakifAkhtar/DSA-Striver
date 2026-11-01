/* class TreeNode {
       int val;
       TreeNode *left, *right;
       TreeNode(int x) : val(x), left(NULL), right(NULL) {}
   };
*/

class Solution {
public:
    TreeNode* prev=NULL;
    void flatten(TreeNode* root) {
        if(root==NULL){
            return;
        }
        // Traverse in Reverse Preorder (Right -> Left -> Root)
        flatten(root->right);
        flatten(root->left);
        
        // Connect current node to the previously processed node
        root->right=prev;
        
        // Set left pointer to NULL (linked list uses only right pointers)
        root->left=NULL;
        
        // Update prev to current node
        prev=root;
    }
};
