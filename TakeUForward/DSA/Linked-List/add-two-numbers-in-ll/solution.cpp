/*
Definition of singly linked list:
class ListNode{
  public:
    int data;
    ListNode *next;
    ListNode() : data(0), next(nullptr) {}
    ListNode(int x) : data(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : data(x), next(next) {}
};
*/

class Solution {
    public:
        ListNode* addTwoNumbers(ListNode* &linkedList1, ListNode* &linkedList2) {
            ListNode* dummy=new ListNode(0);
            ListNode* ans=dummy;
            int carry=0;

            while(linkedList1 != NULL || linkedList2 != NULL){
                int x=(linkedList1 != NULL) ? linkedList1->data : 0;
                int y=(linkedList2 != NULL) ? linkedList2->data : 0;
                int sum=carry + x+y;
                ans->next=new ListNode(sum%10);
                ans=ans->next;
                carry=sum/10;

                if(linkedList1 != NULL){
                    linkedList1=linkedList1->next;
                }
                if(linkedList2 != NULL){
                    linkedList2=linkedList2->next;
                }
            }
            if(carry != 0){
                ans->next=new ListNode(carry);
            }
            return dummy->next;
        }
};