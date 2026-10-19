class Solution {
public:
    // Find the Next Smaller Element (NSE) index for every element
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
     // Find the Previous Smaller or Equal Element (PSE) index
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
        // Get the indices of the next smaller and previous smaller or equal elements
        vector<int>nse=findNSE(arr);
        vector<int>pse=findPSE(arr);

        for(int i=0; i<n; i++){
            // Number of possible starting positions
            long long left=i-pse[i];
            // Number of possible ending positions
            long long right=nse[i]-i;
            // Calculate the contribution of arr[i] as a subarray minimum
            long long contribution=(left*right)%mod;
            contribution=(contribution*arr[i])%mod;
             // Add the contribution to the total sum
            sum=(sum+contribution)%mod;
        }
        return sum;
    }
};
