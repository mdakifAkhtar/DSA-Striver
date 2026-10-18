class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums){
        int n=nums.size();
        stack<int>st;
        vector<int>ans(n,-1);
        // need to traverse the array twice to handle its circular nature.
        for(int i=2*n-1; i>=0; i--){
            int idx=i%n; // circular indexing
            while(!st.empty() && st.top() <=nums[idx]){
                st.pop();
            }

            if(!st.empty()){
                ans[idx]=st.top();
            }
            st.push(nums[idx]);
        }
        return ans;
    }
};