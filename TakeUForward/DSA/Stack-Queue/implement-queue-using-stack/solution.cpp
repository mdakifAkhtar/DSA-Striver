class StackQueue {
private:
    stack<int>input;
    stack<int>output;
public:
    StackQueue() {
    }
    
    void push(int x) {
        input.push(x);
   
    }
    
    int pop() {
        peek();
        int frontElement=output.top();
        output.pop();
        return frontElement;
  
    }
    
    int peek() {
        if(output.empty()){
            while(!input.empty()){
                output.push(input.top());
                input.pop();
            }
        }
        return output.top();
    
    }
    
    bool isEmpty() {
        return input.empty() && output.empty();
  
    }
};