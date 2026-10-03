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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head == NULL){
            return NULL;
        }
        
        ListNode* dummy=new ListNode(0);
        dummy->next= head;

        ListNode* fast=dummy;
        ListNode* slow=dummy;

        for(int i=0; i<n; i++){
            fast =fast->next; // till n
        }

        while(fast->next != NULL){
            slow=slow->next; //slow till before which node to delete when fast->next NULL
            fast=fast->next;
        }

        ListNode* temp=slow->next;
        slow->next=slow->next->next;
        delete temp;

        ListNode* newHead=dummy->next; // dummy before head so newHead=dummy->next
        delete dummy;

        return newHead;
    }
};