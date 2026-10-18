class Solution {
public:
    string prefixToInfix(string s) {
        int n=s.size();
        stack<string>st;
        string ans="";

        for(int i=n-1; i>=0; i--){
            char ch=s[i];
            // If operand, push it
            if((ch >= 'a' && ch <='z') || 
                (ch >= 'A' && ch <='Z')||
                (ch >='1' && ch <= '9')
                ){
                st.push(string(1,ch)); // means create a string containing the character ch exactly once.
            }
            // If operator, combine two operands
            else{
                string op1=st.top();
                st.pop();

                string op2=st.top();
                st.pop();

                string expr="(" + op1 + ch + op2 + ")";
                st.push(expr);
            }
        }
        return st.top();
    }
};