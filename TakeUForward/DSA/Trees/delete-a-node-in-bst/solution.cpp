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
    // H = Height of BST.
    // Balanced BST: O(log N)
    // Skewed BST: O(N)
    // T.C 0(H)

    // Handle all three deletion cases
    TreeNode* helper(TreeNode* root){
        // Case 1: No left child
        // Works for both leaf node and node having only right child
        if(root->left == NULL){
            return root->right;
        }

        // Case 2: No right child
        // Return the left child
        if(root->right==NULL){
            return root->left;
        }
        
        // Case 3: Node has both left and right children

        // Store the right subtree
        TreeNode* rightChild=root->right;
        // Find the rightmost node of the left subtree
        TreeNode* lastRight=findLastRight(root->left);

        // Attach the right subtree to the rightmost node
        lastRight->right=rightChild;
        // Return the left subtree as the new root
        return root->left;
    }

    // Find the rightmost node in the left subtree
    TreeNode* findLastRight(TreeNode* root){
        while(root->right != NULL){
            root=root->right;
        }
        return root;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root == NULL){
            return NULL;
        }
        // If the root itself is the node to be deleted
        if(root->data == key){
            return helper(root);
        }

        TreeNode* curr=root;
        while(curr != NULL){
            if(curr->data > key){
                // Delete the node and reconnect the left subtree
                if(curr->left != NULL && curr->left->data == key){
                    curr->left=helper(curr->left);
                    break;
                }
                else{
                    curr=curr->left;
                }
            }
            else{
                // If right child is the node to be deleted
                if(curr->right != NULL && curr->right->data==key){
                    curr->right=helper(curr->right);
                    break;
                }
                else{
                    curr=curr->right;
                }
            }
        }
        return root;
    }
};