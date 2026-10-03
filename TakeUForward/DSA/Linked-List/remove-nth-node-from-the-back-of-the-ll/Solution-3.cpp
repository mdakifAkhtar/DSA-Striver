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
        // APPROACH 3: Dummy + Slow + Fast

        ListNode* dummy= new ListNode(0);
        dummy->next= head;

        ListNode* fast=dummy;
        ListNode* slow=dummy;

        for(int i=0; i<n; i++){
            fast=fast->next;
        }

        while(fast->next != NULL){
            slow=slow->next;
            fast=fast->next;
        }

        ListNode* temp= slow->next;
        slow->next= slow->next->next;
        delete temp;

        ListNode* newHead= dummy->next;
        delete dummy;

        return newHead;

    }
};