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
    ListNode *deleteTail(ListNode *&head) {
        if(head==NULL){
            return head;
        }

        if(head->next==NULL){
            delete head;
            head=NULL;
            return head;
        }
        ListNode* curr=head;
        while(curr->next->next != NULL){
            curr=curr->next;
        }
        ListNode* temp=curr->next;
        curr->next=NULL;

        delete temp;
        return head;
    }
};