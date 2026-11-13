class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        // Stores the maximum index we can reach
        int maxidx=0;

        for(int i=0; i<n; i++){
            // If current index is beyond our maximum reachable index,
            // we cannot reach this position
            if(i > maxidx){
                return false;
            }
            // Update the maximum reachable index
            maxidx=max(maxidx,i + nums[i]);
        }
        // If we complete the loop, the last index is reachable
        return true;
    }
};