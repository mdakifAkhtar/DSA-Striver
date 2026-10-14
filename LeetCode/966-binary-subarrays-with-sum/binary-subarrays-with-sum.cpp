class Solution {
public:
     // T.C O(2*2N) and S.C O(1)
     int atmost(vector<int>& nums,int goal){
        if(goal <0){
            return 0;
        }
        int n=nums.size();
        int count=0;
        int left=0;
        int right=0;
        int sum=0;

        while(right < n){
            if(goal < 0){
                return 0;
            }

            sum=sum + nums[right];// Expand the window.

            // Shrink the window while sum exceeds goal.
            while(sum > goal){ 
                sum=sum-nums[left]; // Remove the leftmost element.
                left++;
            }

            // Count all valid subarrays ending at right.
            count=count + (right-left+1);
            right++;
        }
        return count;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return atmost(nums,goal)-atmost(nums,goal-1); //    Counts subarrays with sum exactly goal.

    }
};