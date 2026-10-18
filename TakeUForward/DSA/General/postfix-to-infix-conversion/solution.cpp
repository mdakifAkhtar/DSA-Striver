class Solution {
public:
    string postToInfix(string postExp) {
        int n=postExp.size();
        stack<string>st;

        for(int i=0;i<n;i++){
            char ch=postExp[i];
            // If operand, push it onto the stack
            if(
                (ch >='a' && ch <='z') ||
                (ch >='A' && ch <='Z') ||
                (ch >= '0' && ch <='9')
            ){
                st.push(string(1,ch));
            }
            else{
                // First popped operand is the right operand
                string op2=st.top();
                st.pop();
                // Second popped operand is the left operand
                string op1=st.top();
                st.pop();
                // Combine operands with the operator
                string expr="(" + op1 + ch + op2 + ")";
                st.push(expr);
            }
        }
        return st.top();
    }
};
