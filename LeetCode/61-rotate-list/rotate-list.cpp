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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next == NULL || k==0){
            return head;
        }

        int n=1; //length of list
        ListNode* tail=head;
        while(tail->next != NULL){
            tail=tail->next;
            n++;
        }

        // avoid unnecessary rotation
        k=k%n;
        if(k == 0){
            return head;
        }

        // Make circular linked list
        tail->next=head;

         // Find new tail
        int step=n-k;
        ListNode* newTail=head;
        for(int i=1; i<step; i++){
            newTail = newTail->next;
        }
        // New head is after new tail
        ListNode* newHead=newTail->next;
        // Break the circle
        newTail->next=NULL;

        return newHead;
       
    }
};