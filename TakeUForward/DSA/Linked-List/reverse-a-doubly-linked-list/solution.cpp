/*
class ListNode {
public:
    int data;
    ListNode* prev;
    ListNode* next;

    ListNode(int val) : data(val), prev(nullptr), next(nullptr) {}
};
*/

class Solution {
public:
    ListNode* reverseDLL(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* curr=head;
        ListNode* prev=NULL;

        while(curr != NULL){
            ListNode* next=curr->next;
            curr->next=prev;
            curr->prev=next;

            prev=curr;
            curr=next;
        }
        return prev;
        
    }
};