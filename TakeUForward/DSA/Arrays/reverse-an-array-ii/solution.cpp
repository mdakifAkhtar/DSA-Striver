class Solution{	
	public:
        vector<int> reverse(vector<int>&nums,int i,int j){
            if(i >= j){
                return nums;
            }
            swap(nums[i],nums[j]);
            return reverse(nums,i+1,j-1);
        }
		vector<int> reverseArray(vector<int>& nums){			
			int n=nums.size();
            if(n <=1){
                return nums;
            }

            return reverse(nums,0,n-1);
		}
};