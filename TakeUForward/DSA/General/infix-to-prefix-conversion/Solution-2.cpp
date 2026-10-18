class Solution {
public:
    int priority(char ch){
        if(ch=='*' || ch=='/') return 2;
        if(ch=='+' || ch=='-') return 1;
        return -1;
    }
    string infixToPrefix(const string& s) {
        string rev=s;
        int n=rev.size();
        reverse(rev.begin(),rev.end());
        // Swap parentheses
        for(int i=0;i<n;i++){
            if(rev[i]=='('){
                rev[i]=')';
            }
            else if(rev[i]==')'){
                rev[i]='(';
            }
        }
        stack<char>st;
        string ans="";
        int i=0;
        while(i < n){
            char ch=rev[i];
            //operand
            if(ch >='a' && ch <='z'){
                ans=ans+ch;
            }
            // Opening parenthesis
            else if(ch =='('){
                st.push(ch);
            }
            // Closing parenthesis
            else if(ch==')'){
                while(!st.empty() && st.top() != '('){
                    ans=ans+st.top();
                    st.pop();
                }
                if(!st.empty()){
                    st.pop();
                }
            }
            // Operator
            else{
                while(!st.empty()&& st.top() != '(' &&
                    priority(ch) < priority(st.top())){
                    ans=ans+st.top();
                    st.pop();
                }
                st.push(ch);
            }
            i++;
        }
        // Pop remaining operators
        while(!st.empty()){
            ans=ans+st.top();
            st.pop();
        }
        // Reverse postfix to get prefix
        reverse(ans.begin(),ans.end());
        return ans;
    }
};