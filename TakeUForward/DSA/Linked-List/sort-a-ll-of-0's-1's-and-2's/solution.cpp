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
        ListNode* sortList(ListNode* &head) {
            int count0=0;
            int count1=0;
            int count2=0;
            //count frequency of eleemnt
            ListNode* curr=head;
            while(curr != NULL){
                if(curr->data==0){
                    count0++;
                }
                else if(curr->data==1){
                    count1++;
                }
                else{
                    count2++;
                }
                curr=curr->next;
            }
            // store the the values as frequency
            ListNode* temp=head; // reset.
            while(temp != NULL){
                if(count0){
                    temp->data=0;
                    count0--;
                }
                else if(count1){
                    temp->data=1;
                    count1--;
                }
                else{
                    temp->data=2;
                    count2--;
                }
                temp=temp->next;
            }
            return head;
        }
};