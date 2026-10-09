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
            if(curr->val==target){
                ListNode* temp=curr;
                if(curr->prev != NULL){
                    curr->prev->next=curr->next;
                }
                else{
                    head=curr->next;
                }

                if(curr->next != NULL){
                    curr->next->prev=curr->prev;
                }
                curr=curr->next;
                delete temp;
            }
            else{
                curr=curr->next;
            }
        }
        return head;

    }
};