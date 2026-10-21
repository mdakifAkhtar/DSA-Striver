class Solution {
public:
    string removeKdigits(string nums, int k) {
        int n=nums.size();
        stack<char>st;
        string ans="";

        for(int i=0; i<n;i++){
            while(!st.empty() && k >0 && st.top() > nums[i]){
                st.pop();
                k--;
            }

            st.push(nums[i]);
        }
        // Remove remaining digits from the end  
        while(!st.empty() && k>0){
            st.pop();
            k--;
        }
        // Build the answer
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        int i=0;
        while(i <ans.size() && ans[i]=='0'){
            i++;
        }
        ans=ans.substr(i);
        return ans.empty() ? "0":ans;

    }
};