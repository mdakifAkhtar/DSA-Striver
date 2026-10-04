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
    int LengthOfLoop(ListNode* fast,ListNode* slow){
        int length=1;
        while(slow != fast){
            length++;
            fast=fast->next;
        }
        return length;
        
    }
    int findLengthOfLoop(ListNode *head) {
        ListNode* slow=head;
        ListNode* fast=head;

        while(fast != NULL && fast->next != NULL){
            slow=slow->next;
            fast=fast->next->next;

            if(fast==slow){
                fast=fast->next; // slow and fast are currently at the same node. Move fast one step forward so that we can start counting the loop.
                return LengthOfLoop(fast,slow);//length of loop find.
            }
        }
        return 0;

    }
};