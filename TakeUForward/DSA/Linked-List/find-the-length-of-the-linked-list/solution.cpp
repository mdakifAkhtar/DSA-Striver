class Solution {
public:
    int getLength(ListNode* head) {
        int length=0;

        while(head != NULL){
            length = length + 1;
            head=head->next;
        }

        return length;
    }
};