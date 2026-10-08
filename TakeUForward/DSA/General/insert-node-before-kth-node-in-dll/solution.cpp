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
    ListNode* insertBeforeKthPosition(ListNode* head, int X, int K) {
        if(K==1){
            ListNode* newNode=new ListNode(X);
            head->prev=newNode;
            newNode->next=head;
            newNode->prev=NULL;

            return newNode;
        }

        ListNode* curr=head;
        for(int i=1; i<K; i++){
            curr=curr->next;
        }
        ListNode* newNode=new ListNode(X);
        curr->prev->next = newNode;
        newNode->next=curr;

        newNode->prev=curr->prev;
        curr->prev=newNode;

        return head;
        
    }
};