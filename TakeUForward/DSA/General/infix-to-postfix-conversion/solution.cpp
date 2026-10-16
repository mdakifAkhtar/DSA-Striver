class Solution {
public:
     int priority(char ch){
            if(ch=='^'){
                return 3;
            }
            else if(ch=='*' || ch=='/' || ch=='%'){
                return 2;
            }
            else if(ch=='+' || ch=='-'){
                return 1;
            }
            return -1;
        }
    string infixToPostfix(string s) {
        int n=s.size();
        int i=0;
        string ans="";
        stack<char>st;

        while(i < n){
            if( // If operand, add directly to the answer
                (s[i] >='A' && s[i] <= 'Z')||
                (s[i] >= 'a' && s[i] <= 'z')||
                (s[i] >= '0' && s[i] <= '9')
            ){
                ans=ans+s[i];
            }
            // If opening bracket, push into stack
            else if(s[i]=='('){
                st.push(s[i]);
            }

            // If closing bracket, pop until opening bracket
            else if(s[i]==')'){
                while(!st.empty() && st.top()!='('){
                    ans=ans+st.top();
                    st.pop();
                }
                if(!st.empty()){
                    st.pop(); // Remove '('
                }
            }
            // If operator
            else{
                while(!st.empty() && st.top() !='(' &&
                (priority(s[i]) < priority(st.top()) ||
                (priority(s[i])==priority(st.top()) && 
                s[i] != '^'))){
                    ans=ans+st.top();
                    st.pop();
                }
                st.push(s[i]);
            }
            i++; // Move to next character
        }
        // pop remaining operators
        while(!st.empty()){
            ans=ans+st.top();
            st.pop();
        }
        return ans;
        
    }
};