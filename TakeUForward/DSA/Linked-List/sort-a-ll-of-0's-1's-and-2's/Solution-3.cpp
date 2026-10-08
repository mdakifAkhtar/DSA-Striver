/*
Definition of singly linked list:
class ListNode{
  public:
    int data;
    ListNode *next;
    ListNode() : data(0), next(nullptr) {}
    ListNode(int x) : data(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : data(x), next(next) {}
};
*/

class Solution {
    public:
        ListNode* sortList(ListNode* &head) {
            if(head==NULL || head->next==NULL){
                return head;
            }
            ListNode* zeroDummy=new ListNode(0);
            ListNode* oneDummy=new ListNode(0);
            ListNode* twoDummy=new ListNode(0);

            ListNode* zero=zeroDummy;
            ListNode* one=oneDummy;
            ListNode* two=twoDummy;

            // separate node 0,1,2
            ListNode* curr=head;
            while(curr != NULL){
                ListNode* next=curr->next;
                curr->next=NULL;

                if(curr->data==0){
                    zero->next=curr;
                    zero=zero->next;
                }
                else if(curr->data == 1){
                    one->next=curr;
                    one=one->next;
                }
                else{
                    two->next=curr;
                    two=two->next;
                }
                curr=next;
            }
            zero->next=(oneDummy->next != NULL) ? oneDummy->next : twoDummy->next;

            if(oneDummy->next != NULL){
                one->next=twoDummy->next;
            }
            head=zeroDummy->next;
            return head;
        }
};