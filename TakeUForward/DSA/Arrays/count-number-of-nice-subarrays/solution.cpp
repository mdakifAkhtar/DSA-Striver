class Solution {
public:
    int sumK(vector<int>&nums,int k){
        if(k < 0){
            return 0;
        }
        int n=nums.size();
        int left=0;
        int right=0;
        int sumk=0;
        int count=0;

        while(right < n){
            // Increase the odd count if the current number is odd.
            if(nums[right]%2 != 0){
                sumk=sumk+1;
            }
            // Shrink the window while odd count exceeds k.
            while(sumk > k){
                // Decrease odd count if the leftmost number is odd.
                if(nums[left]%2 != 0){
                    sumk=sumk-1;
                }
                left++;
            }
            // Count all valid subarrays ending at right.
            count=count+(right-left+1);
            right++;
        }
        return count;
    }
    int numberOfOddSubarrays(vector<int>& nums, int k) {
        // Exactly k odd numbers = At most k - At most (k - 1).
        return sumK(nums,k) - sumK(nums,k-1);
        
    }
};