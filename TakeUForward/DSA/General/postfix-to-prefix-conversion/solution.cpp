class Solution {
public:
    string postToPre(string postfix) {
        int n=postfix.size();
        stack<string>st;

        for(int i=0;i<n;i++){
            char ch=postfix[i];
            if(
                (ch >='a' && ch <='z')||
                (ch >='A' && ch <='Z')||
                (ch >='0' && ch <='9')
            ){
                st.push(string(1,ch));
            }
            else{
                string op2=st.top();
                st.pop();

                string op1=st.top();
                st.pop();

                string expr=ch+op1+op2;
                st.push(expr);
            }
        }
        return st.top();
    }
};