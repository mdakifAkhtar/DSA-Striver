class ArrayStack {
private:
    vector<int>st;
public:
    ArrayStack() {
    }
    
    void push(int x) {
        st.push_back(x);
        
   
    }
    
    int pop() {
        int topElement=st.back();
        st.pop_back();
        return topElement;
  
    }
    
    int top() {
        return st.back();
    
    }
    
    bool isEmpty() {
        return st.empty();
  
    }
};