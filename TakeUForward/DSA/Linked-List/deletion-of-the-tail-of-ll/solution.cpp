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
        ListNode* deleteTail(ListNode* &head) {
            //your code goes here
            if(head== NULL || head->next == NULL){
                return NULL;
            }
            ListNode* curr=head;
            while(curr->next->next != NULL){
                curr=curr->next;
            }
            curr->next=NULL;
            return head;
           
        }
};