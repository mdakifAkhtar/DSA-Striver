/*
Definition of singly linked list:
struct ListNode
{
    int val;
    ListNode *next;
    ListNode()
    {
        val = 0;
        next = NULL;
    }
    ListNode(int data1)
    {
        val = data1;
        next = NULL;
    }
    ListNode(int data1, ListNode *next1)
    {
        val = data1;
        next = next1;
    }
};
*/

class Solution {
public:
    ListNode* merge(ListNode* left,ListNode* right){
        ListNode* dummy=new ListNode(0);
        ListNode* curr=dummy;

        while(left != NULL && right != NULL){
            if(left->val < right->val){
                curr->next=left;
                left=left->next;
            }
            else{
                curr->next=right;
                right=right->next;
            }
            curr=curr->next;
        }

        while(left != NULL){
            curr->next=left;
            left=left->next;
            curr=curr->next;
        }
        while(right != NULL){
            curr->next=right;
            right=right->next;
            curr=curr->next;
        }
        return dummy->next;
    }
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next == NULL){
            return head;
        }

        //find middle
        ListNode* slow=head;
        ListNode* fast=head->next;

        while(fast != NULL && fast->next != NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* mid=slow->next;
        slow->next=NULL; //Break slow in linked list;

        ListNode* left=sortList(head);
        ListNode* right=sortList(mid);

        return merge(left,right);
    }
};

