class Solution {
public:
    vector<int> findNSE(vector<int> &arr){
        int n=arr.size();
        vector<int>ans(n);
        stack<int>st;
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && arr[st.top()] > arr[i]){
                st.pop();
            }
            ans[i]=st.empty()? n:st.top();
            st.push(i);
        }
        return ans;
    }
    vector<int> findPSE(vector<int>&arr){
        int n=arr.size();
        vector<int>ans(n);
        stack<int>st;
        for(int i=0; i<n;i++){
            while(!st.empty() && arr[st.top()] >= arr[i]){
                st.pop();
            }
            ans[i]=st.empty()? -1:st.top();
            st.push(i);
        }
        return ans;
    }
    int sumSubarrayMins(vector<int> &arr) {
        int n=arr.size();
        long long sum=0;
        int mod=1e9+7;
        vector<int>nse=findNSE(arr);
        vector<int>pse=findPSE(arr);

        for(int i=0; i<n; i++){
            long long left=i-pse[i];
            long long right=nse[i]-i;

            long long contribution=(left*right)%mod;
            contribution=(contribution*arr[i])%mod;

            sum=(sum+contribution)%mod;
        }
        return sum;
    }
};
