class Solution {
public:
    string prefixToPostfix(const string& s) {
        int n=s.size();
        stack<string>st;

        for(int i=n-1; i>=0; i--){
            char ch=s[i];
            if(
                (ch >='a' && ch <='z')||
                (ch >='A' && ch <='Z') ||
                (ch >='1' && ch <='9')
                ){
                    st.push(string(1,ch));
                }     
            else{
                string op1=st.top();
                st.pop();

                string op2=st.top();
                st.pop();

                string expr=op1+op2+ch;
                st.push(expr);
            }    
        }
        return st.top();
    }
};