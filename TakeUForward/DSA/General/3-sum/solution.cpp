class Solution {
public:
    // T.C O(N)
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;

        unordered_map<int,int>mp;

        for(int i=0; i<n;i++){
            if(i > 0 && nums[i]==nums[i-1]){
                continue;
            }
            int j=i+1;
            int right=n-1;

            while(j < right){
                int sum=nums[i]+nums[j]+nums[right];

                if(sum < 0){
                    j++;
                }
                else if(sum > 0){
                    right--;
                }
                else{
                    vector<int> temp={nums[i],nums[j],nums[right]};
                    ans.push_back(temp);
                    j++;
                    right--;

                    while( j < right && nums[j]==nums[j-1]) j++;
                    while(j < right && nums[right] == nums[right+1]) right--;
                }
            }
        }
        return ans;
        
    }
};