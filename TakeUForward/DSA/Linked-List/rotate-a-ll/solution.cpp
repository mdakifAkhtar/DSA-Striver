/*
Definition of singly linked list:
struct ListNode
{
    int val;
    ListNode *next;
    ListNode()
    {
        val = 0;
        next = NULL;
    }
    ListNode(int data1)
    {
        val = data1;
        next = NULL;
    }
    ListNode(int data1, ListNode *next1)
    {
        val = data1;
        next = next1;
    }
};
*/

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next == NULL || k==0){
            return head;
        }

        //find length
        int n=1;
        ListNode* curr=head;
        while(curr->next != NULL){
            curr=curr->next;
            n=n+1;
        }

        // avoid unnecessary rotation
        k=k%n;
        if(k==0){
            return head;
        }

        //Make circular linked list
        curr->next=head;

        // find new tail
        ListNode* tail=head;
        int step=n-k;
        for(int i=1; i<step; i++){
            tail=tail->next;
        }

        // Make new head
        ListNode* newHead=tail->next;
        //Break circular
        tail->next=NULL;

        return newHead;

    }
};