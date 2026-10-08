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

class Solution
{
public:
    ListNode *arrayToDoublyLinkedList(vector<int> &arr) {
        if(arr.size()== 0){
            return nullptr;
        }

        ListNode* head=new ListNode(arr[0]);
        ListNode* temp=head;

        for(int i=1; i<arr.size(); i++){
            ListNode* newNode=new ListNode(arr[i]);
            temp->next=newNode;
            newNode->prev=temp;

            temp=newNode;
        }

        return head;
    }
};