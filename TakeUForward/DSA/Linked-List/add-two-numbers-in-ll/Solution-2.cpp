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
                int sum=carry;
                if(linkedList1 != NULL){
                    sum=sum+linkedList1->data;
                    linkedList1=linkedList1->next;
                }
                if(linkedList2 != NULL){
                    sum=sum + linkedList2->data;
                    linkedList2=linkedList2->next;
                }
                ans->next=new ListNode(sum%10);
                ans=ans->next;
                carry=sum/10;
            }
            if(carry != 0){
                ans->next=new ListNode(carry);
            }
            return dummy->next;
        }
};