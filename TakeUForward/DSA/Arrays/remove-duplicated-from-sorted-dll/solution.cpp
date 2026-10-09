/*
Definition of doubly linked list:
struct ListNode
{
    int val;
    ListNode *next;
    ListNode *prev;
    ListNode()
    {
        val = 0;
        next = NULL;
        prev = NULL;
    }
    ListNode(int data1)
    {
        val = data1;
        next = NULL;
        prev = NULL;
    }
    ListNode(int data1, ListNode *next1, ListNode *prev1)
    {
        val = data1;
        next = next1;
        prev = prev1;
    }
};
*/

class Solution {
public:
    ListNode * removeDuplicates(ListNode *head) {
        if(head==NULL){
            return NULL;
        }
        ListNode* curr=head;
        while(curr!= NULL && curr->next != NULL){
            if(curr->val==curr->next->val){ // if true than not move to next.
                ListNode* temp=curr->next;
                curr->next=temp->next;
                if(temp->next != NULL){
                    temp->next->prev=curr;
                }
                delete temp;
            }
            else{
                curr=curr->next;
            }
        }
        return head;
    }
};