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
    ListNode* insertBeforeTail(ListNode* head, int X) {
        if(head == NULL){
            ListNode* newNode=new ListNode(X);
            return newNode;
        }
        if(head->next == NULL){
            ListNode* newNode=new ListNode(X);
            head->prev=newNode;
            newNode->next=head;
            newNode->prev=NULL;
            return newNode;
        }

        ListNode* curr=head;
        while(curr->next != NULL){
            curr=curr->next;
        }
        
        ListNode* newNode=new ListNode(X);
        curr->prev->next=newNode;
        newNode->prev=curr->prev;

        newNode->next=curr;
        curr->prev=newNode;
;
        return head;
    }
};
