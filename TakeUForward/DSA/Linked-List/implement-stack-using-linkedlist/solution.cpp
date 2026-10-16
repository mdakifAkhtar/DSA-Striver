class LinkedListStack {
    private:
        struct Node{
            int data;
            Node* next;
            Node(int x){
                data=x;
                next=nullptr;
            }
        };
        Node* topNode;
public:
    LinkedListStack() {
        topNode=nullptr;

    }
    
    void push(int x) {
        Node* newNode=new Node(x);
        newNode->next=topNode;
        topNode=newNode;
    }
    
    int pop() {
        int topElement=topNode->data;
        Node* temp=topNode;
        topNode=topNode->next;
        delete temp;
        return topElement;
  
    }
    
    int top() {
        return topNode->data;
    
    }
    
    bool isEmpty() {
        return topNode==nullptr;
  
    }
};