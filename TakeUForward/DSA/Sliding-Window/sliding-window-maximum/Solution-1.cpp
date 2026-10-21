class Solution{
public:
    vector<int> maxSlidingWindow(vector<int> &arr, int k) {
        int n=arr.size();
        vector<int>ans;
        deque<int>dq;

        for(int i=0; i<n; i++){
            // Remove indices outside the current window
            if(!dq.empty() && dq.front() <=i-k){
                dq.pop_front();
            }
            // Remove smaller elements from the back
            while(!dq.empty() && arr[dq.back()] <arr[i]){
                dq.pop_back();
            }
            // Store the current index
            dq.push_back(i);
            // Record maximum once the first window is complete
            if(i >= k-1){
                ans.push_back(arr[dq.front()]);
            }
        }
        return ans;
        
    }
};