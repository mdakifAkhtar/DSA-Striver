/**
 * Definition for a binary tree node.
 * class TreeNode {
 *     int data;
 *     TreeNode *left;
 *     TreeNode *right;
 *      TreeNode(int val) : data(val) , left(nullptr) , right(nullptr) {}
 * };
 **/

class Solution{	
	public:
        // T.C O(N);
        // S.C O(1)
		vector<int> floorCeilOfBST(TreeNode* root,int key){
            int floor=-1;
            int ceil=-1;

            while(root != NULL){
                if(root->data == key){
                    floor=root->data;
                    ceil=root->data;
                    break;
                }
                else if(root->data < key){
                    floor=root->data;
                    root=root->right;
                }
                else{
                    ceil=root->data;
                    root=root->left;
                }
            }
            return {floor,ceil};
		}
};