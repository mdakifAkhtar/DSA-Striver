class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>ans;
        deque<int>dq;

        for(int i=0; i<n; i++){
            // Remove indices outside the current window
            if(!dq.empty() && dq.front() <= i-k){
                dq.pop_front();
            }
            // Remove smaller elements from the back
            while(!dq.empty() && nums[dq.back()] <nums[i]){
                dq.pop_back();
            }
            // Store the current index
            dq.push_back(i);
            // Record maximum once the first window is complete
            if(i >= k-1){
                ans.push_back(nums[dq.front()]);
            }
        }
        return ans;
        
    }
};