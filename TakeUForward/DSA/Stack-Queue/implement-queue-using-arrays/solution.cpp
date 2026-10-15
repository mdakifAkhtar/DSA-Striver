class ArrayQueue {
private:
    vector<int>st;
public:
    ArrayQueue() {
    }
    
    void push(int x) {
        st.push_back(x);
   
    }
    
    int pop() {
        int frontElement=st.front();
        st.erase(st.begin());
        return frontElement;
  
    }
    
    int peek() {
        return st.front();
    
    }
    
    bool isEmpty() {
        return st.empty();
  
    }
};