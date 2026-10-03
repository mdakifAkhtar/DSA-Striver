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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // APPROACH 2: Slow + Fast
        if(head== NULL){
            return NULL;
        }

        ListNode* slow=head;
        ListNode* fast=head;

        for(int i=0; i<n; i++){
            fast=fast->next;
        }

        if(fast == NULL){
            ListNode* temp=head;
            head=head->next;
            delete temp;

            return head;
        }

        while(fast->next != NULL){
            slow=slow->next;
            fast=fast->next;
        }
        ListNode* temp=slow->next;
        slow->next=slow->next->next;
        delete temp;

        return head;

    }
};