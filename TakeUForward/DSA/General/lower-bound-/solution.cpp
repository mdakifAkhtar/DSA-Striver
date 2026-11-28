class Solution{
public:
    int lowerBound(vector<int> &nums, int x){
        int n=nums.size();

        int l=0;
        int r=n-1;
        int ans=n;

        while(l <= r){
            int mid=l + (r-l)/2;

            if(nums[mid] >= x){
                ans=mid;
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return ans;
        
    }
};