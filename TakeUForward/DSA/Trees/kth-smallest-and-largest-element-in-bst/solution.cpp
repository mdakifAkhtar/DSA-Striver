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
    vector<int>ans;
    int Scount=0;
    int Lcount=0;

    void inOrder(TreeNode* root,int k){
        if(root==NULL){
            return;
        }
        inOrder(root->left,k);
        if(Scount >= k){
            return;
        }

        Scount++;
        if(Scount==k){
            ans.push_back(root->data);
            return;
        }
        inOrder(root->right,k);
    }

    void postOrder(TreeNode* root, int k){
        if(root==NULL){
            return;
        }
        postOrder(root->right,k);
        if(Lcount >= k){
            return;
        }
        Lcount++;
        if(Lcount==k){
            ans.push_back(root->data);
            return;
        }
        postOrder(root->left,k);
    }
	vector<int> kLargesSmall(TreeNode* root,int k){
		inOrder(root,k);
        postOrder(root,k);

        return ans;
	}
};