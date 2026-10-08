/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA == NULL || headB==NULL){
            return NULL;
        }
        ListNode* a=headA;
        ListNode* b=headB;

        while(a != b){
            if(a==NULL){ // when a==NULL than we change the pointer haedA to headB
                a=headB;
            }
            else{
                a=a->next;
            }

            if(b==NULL){ // when b==NULL than we change the pointer headB to haedA
                b=headA;
            }
            else{
                b=b->next;
            }
        }
        return a;
    }
};