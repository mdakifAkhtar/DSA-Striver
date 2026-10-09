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
    ListNode * deleteAllOccurrences(ListNode* head, int target) {
        if(head==NULL){
            return NULL;
        }
        ListNode* curr=head;

        while(curr != NULL){
            if(curr->val == target){
                ListNode* temp=curr;
                curr=curr->next;

                if(temp->prev != NULL){
                    temp->prev->next=temp->next;
                }
                else{
                    head=temp->next;
                }

                if(temp->next != NULL){
                    temp->next->prev=temp->prev;
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