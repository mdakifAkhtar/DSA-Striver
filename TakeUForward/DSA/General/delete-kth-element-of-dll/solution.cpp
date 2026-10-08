/**
class ListNode
{
 * Definition for doubly-linked list.
 *  public:
 *      int data;
 *      ListNode *prev;
 *      ListNode *next;
 *      ListNode() : data(0), prev(nullptr), next(nullptr) {}
 *      ListNode(int x) : data(x), prev(nullptr), next(nullptr) {}
 *      ListNode(int x, ListNode *prev, ListNode *next) : data(x), prev(prev), next(next) {}
};
*/

class Solution {
public:
    ListNode *deleteKthElement(ListNode *&head, int k) {
        // empty linkedlist
        if(head==NULL){
            return head;
        }

        // delete head
        if(k==1){
            ListNode* temp=head;
            head=head->next;
            if(head != NULL){
                head->prev=NULL;
            }
            delete temp;
            return head;
        }
        //delete Kth element
        ListNode* curr=head;
        for(int i=1; i<k; i++){
            curr=curr->next;
        }
        ListNode* temp=curr;
        curr->prev->next=curr->next;

        if(curr->next != NULL){
            curr->next->prev=curr->prev;
        }

        delete temp;
        return head;
    }
};