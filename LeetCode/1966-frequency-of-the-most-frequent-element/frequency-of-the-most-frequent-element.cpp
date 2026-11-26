class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(),nums.end());

        int l=0;
        long long sum=0;
        int ans=1;

        for(int r=0; r<n; r++){
            sum=sum+nums[r];

            while((long long)nums[r] * (r-l+1) - sum > k){ //Required Operations = (Target × Window Size) − Current Sum
                sum=sum-nums[l];
                l++;
            }
            ans=max(ans,r-l+1);
        }
        return ans;
    }
};