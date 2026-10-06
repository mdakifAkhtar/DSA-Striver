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
class Solution { // Merge sort.
public:
    ListNode* merge(ListNode* left,ListNode* right){
        ListNode* dummy=new ListNode(0);
        ListNode* curr=dummy;

        while(left != NULL && right != NULL){
            if(left->val < right->val){
                curr->next=left;
                left=left->next;
            }
            else{
                curr->next=right;
                right=right->next;
            }
            curr=curr->next;
        }
        while(left != NULL){
            curr->next=left;
            left=left->next;
            curr=curr->next;
        }

        while(right != NULL){
            curr->next = right;
            right=right->next;
            curr=curr->next;
        }

        return dummy->next;
    }

    ListNode* sortList(ListNode* head) {
        //Base Case
        if(head == NULL || head->next == NULL){
            return head;
        }
        // find middle of linkedlist
        ListNode* slow = head;
        ListNode* fast = head->next; // this give balance split

        while(fast != NULL && fast->next != NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        //split list
        ListNode* mid =slow->next;
        slow->next=NULL;
        //SortBoth halves
        ListNode* left=sortList(head);
        ListNode* right=sortList(mid);
        //Merge
        return merge(left,right);
    }
};