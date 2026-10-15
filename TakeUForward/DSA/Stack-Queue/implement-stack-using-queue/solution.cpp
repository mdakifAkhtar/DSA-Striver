class QueueStack {
private:
    queue<int>q;
public:
    QueueStack() {
    }
    
    void push(int x) {
        q.push(x);
        int n=q.size();
        for(int i=0; i<n-1; i++){
            q.push(q.front());
            q.pop();
        }
    }
    
    int pop() {
        int topElement=q.front();
        q.pop();
        return topElement;
  
    }
    
    int top() {
        return q.front();
    
    }
    
    bool isEmpty() {
        return q.empty();
    }
};