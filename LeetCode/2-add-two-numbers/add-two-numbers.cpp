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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy=new ListNode(0);
        ListNode* ans=dummy;
        int digit=0;

        while(l1 != NULL || l2 != NULL){
            int x = (l1 != NULL) ? l1->val : 0;
            int y=(l2 != NULL) ? l2->val : 0;
            int sum=digit + x + y;
            ans->next=new ListNode(sum%10);
            digit=sum/10;

            ans=ans->next;
            if(l1 != NULL){
                l1=l1->next;
            }
            if(l2 != NULL){
                l2=l2->next;
            }
        }
        if(digit != 0){
            ans->next=new ListNode(digit);
        }
        return dummy->next; 
    }
};