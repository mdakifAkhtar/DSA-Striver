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
    void insertBeforeGivenNode(ListNode* node, int X) {
        ListNode* newNode=new ListNode(X);

        node->prev->next=newNode;
        newNode->next=node;

        newNode->prev=node->prev;
        node->prev=newNode;

    }
};
