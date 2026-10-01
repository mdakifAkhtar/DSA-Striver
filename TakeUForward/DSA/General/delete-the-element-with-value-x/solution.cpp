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
        ListNode* deleteNodeWithValueX(ListNode* &head, int X) {
            while(head != NULL && head->data ==X){
              ListNode* temp=head;
              head=head->next;
              delete temp;
            }

            ListNode* curr=head;
            while(curr != NULL && curr->next != NULL){
                if(curr->next->data == X){
                    ListNode* temp=curr->next;
                    curr->next=curr->next->next;
                    delete temp;
                    
                }
                else{
                    curr=curr->next;
                }
            }
            return head;
        }
};