class LinkedListQueue {
private:
    struct Node{
        int data;
        Node* next;
        Node(int x){
            data=x;
            next=nullptr;
        }
    };
    Node* head=nullptr;
    Node* tail=nullptr;

public:
    LinkedListQueue() {
        head=nullptr;
        tail=nullptr;
    }
    
    void push(int x) {
        Node* newNode=new Node(x);
        if(head==NULL){
            head=newNode;
            tail=newNode;
        }
        else{
            tail->next=newNode;
            tail=newNode;
        }

    }
    
    int pop() {
        int frontElement=head->data;
        Node* temp=head;
        head=head->next;
        if(head==NULL){
            tail=nullptr;
        }
        delete temp;
        return frontElement;
  
    }
    
    int peek() {
        return head->data;
    }
    
    bool isEmpty() {
        return head==nullptr;
  
    }
};