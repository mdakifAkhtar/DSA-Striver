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
    int findLengthOfLoop(ListNode *head) {
        unordered_map<ListNode*, int> mp;

        ListNode* curr=head;
        int count=0;
        while(curr != NULL){
            if(mp.find(curr) != mp.end()){
                return count-mp[curr];
            }
            mp[curr]=count;
            count=count+1;
            curr=curr->next; // update current
        }
        return 0;
    }
};