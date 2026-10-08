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
        if(head==NULL || head->next == NULL){
            return head;
        }

        ListNode* curr=head;
        ListNode* prev=NULL;

        while(curr != NULL){
            prev=curr->prev;
            curr->prev=curr->next;
            curr->next=prev;
            curr=curr->prev;
        }
        return prev->prev;
    }
};