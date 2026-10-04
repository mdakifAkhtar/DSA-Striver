/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return true;
        }
        // find middle of linked list
        ListNode* fast=head;
        ListNode* slow=head;

        while(fast != NULL && fast->next != NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
        //reverse second half
        ListNode* prev=NULL;
        ListNode* curr=slow;
        
        while(curr != NULL){
            ListNode* next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        //cpmpare with first half and sreverse second half
        ListNode* first=head;
        ListNode* second=prev;
        while(second != NULL){
            if(first->val != second->val){
                return false;
            }
            first=first->next;
            second=second->next;
        }
        return true;
        
    }
};