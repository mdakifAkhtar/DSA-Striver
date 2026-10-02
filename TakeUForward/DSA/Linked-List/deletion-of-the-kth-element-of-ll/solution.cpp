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
        ListNode* deleteKthNode(ListNode* &head, int k) {
            if(head == NULL){
                return NULL;
            }

            if(k == 1){
                ListNode* temp=head;
                head=head->next;
                delete temp;
                return head;
            }

            ListNode* curr = head;
            for(int i=1; i<k-1; i++){
                curr=curr->next;
            }
            ListNode* temp = curr->next;
            curr->next = curr->next->next;
            delete temp;

            return head;
        }
};
