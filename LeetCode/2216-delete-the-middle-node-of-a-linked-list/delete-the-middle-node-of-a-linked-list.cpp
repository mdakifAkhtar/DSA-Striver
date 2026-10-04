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
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL || head->next== NULL){
            return NULL;
        }
        ListNode* fast=head;
        ListNode* slow=head;

        while(fast != NULL && fast->next!= NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
        ListNode* temp=slow; // middle
        //Need the node before slow
        ListNode* prev=head;
        while(prev->next != slow){
            prev=prev->next;
        }
        //prev->next=prev->next->next; OR
        prev->next=slow->next;
        delete temp;
        return head;
    }
};