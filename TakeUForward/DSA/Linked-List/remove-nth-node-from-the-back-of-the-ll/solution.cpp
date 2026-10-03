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
    // APPROACH 1: Using Length
    // Time: O(n)
    // Space: O(1)
        if(head== NULL){
            return NULL;
        }
        int length=0;
        ListNode* curr=head;

        while(curr != NULL){
            length = length +1;
            curr=curr->next;
        }

        // Delete Head
        if(n == length){
            ListNode* temp=head;
            head=head->next;
            delete temp;
            return head;
        }
        curr=head; // because curr become NULL after while Loop.

        for(int i=1; i<length-n; i++){
            curr=curr->next;
        }
        
        //Delete Node
        ListNode* temp= curr->next;
        curr->next=curr->next->next;
        delete temp;

        return head;
    }
};