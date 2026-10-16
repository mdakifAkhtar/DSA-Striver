class Solution {
public:
    bool isValid(string str) {
        stack<int>st;
        int n=str.size();
        for(int i=0; i<n; i++){
            if(str[i]=='(' || str[i]=='{' || str[i]=='['){
            st.push(str[i]);
            }
            else{
                if(st.empty()){
                    return false;
                }
                char ch=st.top();
                st.pop();

                if(
                    (str[i]==')' && ch !='(')||
                    (str[i]=='}' && ch !='{') ||
                    (str[i]==']' && ch!= '[')
                    ){
                        return false;
                }
            }
        }
        return st.empty();
       
    }
};