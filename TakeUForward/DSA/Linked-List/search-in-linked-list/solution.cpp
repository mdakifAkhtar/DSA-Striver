/*Defination of ListNode
class ListNode {
public:
    int val;
    ListNode* next;

    ListNode(int value) : val(value), next(nullptr) {}

    ~ListNode() {
        delete next;
    }
};
*/


class Solution {
public:
    bool searchKey(ListNode* head, int key) {
        while(head != NULL){
            if(head->val==key){
                return true;
            }
            head=head->next;
        }
        return false;
    }
};