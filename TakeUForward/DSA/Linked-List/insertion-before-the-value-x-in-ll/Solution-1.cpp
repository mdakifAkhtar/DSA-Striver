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
        ListNode* insertBeforeX(ListNode* &head, int X, int val) {
            // X is at head
            if(head != NULL && head->data == X){
                ListNode* temp=new ListNode(val);
                temp->next=head;
                head=temp;
                return head;
            }

            ListNode* curr=head;
            // Find node before X
            while(curr != NULL && curr->next != NULL){
                if(curr->next->data==X){
                    break;
                }
                curr=curr->next;
            }
            // X not found
            if(curr == NULL || curr->next == NULL){
                return head;
            }
            // Insert before X
            ListNode* temp=new ListNode(val);
            temp->next=curr->next;
            curr->next=temp;
            return head;
        }
};