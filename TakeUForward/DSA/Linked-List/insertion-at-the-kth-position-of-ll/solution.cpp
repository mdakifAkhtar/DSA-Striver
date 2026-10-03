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
        ListNode* insertAtKthPosition(ListNode* &head, int X, int K) {
            // Insert at head
            if(K == 1){
                ListNode* temp=new ListNode(X);
                temp->next=head;
                head=temp;
                return head;

            }
            // Reach node before Kth position
            ListNode* curr= head;
            for(int i=1; i<K-1; i++ && curr != NULL){
                curr=curr->next;
            }
            // Invalid position
            if(curr==NULL){
                return head;
            }
            // Create new node
            ListNode* temp = new ListNode(X);
            // Insert node
            temp->next=curr->next;
            curr->next = temp;
            return head;
        }
};