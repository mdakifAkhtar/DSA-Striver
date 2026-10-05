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
    ListNode *findStartingPoint(ListNode *head) {
        if(head==NULL || head->next ==NULL){
            return NULL;
        }
        ListNode* slow=head;
        ListNode* fast=head;

        while(fast != NULL && fast->next != NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                ListNode* curr=head;
                while(curr != slow){
                    curr=curr->next;
                    slow=slow->next;
                }
                return curr;
            }
        }
        return NULL;
    }
};