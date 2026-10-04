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
    bool isPalindrome(ListNode* head) {
        if(head == NULL && head->next==NULL){
            return true;
        }

        ListNode* slow=head;
        ListNode* fast=head;

        while(fast != NULL && fast->next != NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        // Now reverse second half;
        ListNode* prev=NULL;
        ListNode* curr=slow;

        while(curr != NULL){
            ListNode* next = curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        // prev starting node of reverse
        ListNode* first=head;
        ListNode* second=prev;
        while(second != NULL){
            if(first->val != second->val){
                return false;
            }
            first=first->next;
            second=second->next;
        }
        return 1;
        
    }
};