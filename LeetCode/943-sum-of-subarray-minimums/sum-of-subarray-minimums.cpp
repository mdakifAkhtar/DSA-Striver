class Solution {
public:
    // Find the Next Smaller Element (NSE) index
    vector<int> findNSE(vector<int>&arr){
        int n=arr.size();
        vector<int>nse(n);
        stack<int>st;
        // Traverse from right to left
        for(int i=n-1; i>=0; i--){
            // Remove elements greater than or equal to arr[i]
            while(!st.empty() && arr[st.top()] >= arr[i]){
                st.pop();
            }
            // Store the next smaller element's index, or n if none exists
            nse[i]=st.empty() ? n:st.top();
            // Push the current index
            st.push(i);
        }
        return nse;
    }
    
    // Find the Previous Smaller Element (PSE) index
    vector<int> findPSE(vector<int>&arr){
        int n=arr.size();
        vector<int>pse(n);
        stack<int>st;
        // Traverse from left to right
        for(int i=0; i<n; i++){
            // Remove elements strictly greater than arr[i]
            while(!st.empty() && arr[st.top()] > arr[i]){
                st.pop();
            }
            // Store the previous smaller or equal element's index,
            // or -1 if none exists
            pse[i]=st.empty() ? -1:st.top();
            // Push the current index
            st.push(i);
        }
        return pse;
    }
    int sumSubarrayMins(vector<int>& arr) {
        int n=arr.size();
        long long sum=0;
        int mod=1e9+7;
        // Find next smaller and previous smaller or equal indices
        vector<int>nse=findNSE(arr);
        vector<int>pse=findPSE(arr);
        for(int i=0;i<n;i++){
            // Number of possible starting positions
            long long left=i-pse[i];
            // Number of possible ending positions
            long long right=nse[i]-i;
            
            // Calculate the contribution of arr[i]
            long long contribution=(left * right)%mod;
            contribution=(contribution * arr[i])%mod;
            // Add the contribution to the total sum
            sum=(sum+contribution)%mod;
        }
        return sum;
        
    }
};