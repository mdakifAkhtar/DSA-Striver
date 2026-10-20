class Solution {
public:
    string removeKdigits(string num, int k) {
        int n=num.size();
        stack<char>st;
        for(int i=0; i<n;i++){
            while(!st.empty() && k>0 && st.top() > num[i]){
                st.pop();
                k--;
            }
            st.push(num[i]);
        }
        // Remove remaining digits from the end
        while(!st.empty() && k > 0){
            st.pop();
            k--;
        }

        string ans="";
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        // Remove leading zeros
        int i=0;
        while(i <ans.size() && ans[i]=='0'){
            i++;
        }
        ans=ans.substr(i); // starting from i to end;
        //If the result is empty, return "0"
        return ans.empty()? "0":ans;
    }
};