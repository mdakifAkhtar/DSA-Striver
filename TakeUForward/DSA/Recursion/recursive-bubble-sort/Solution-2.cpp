class Solution {
public:
    vector<int> bubbleSort(vector<int>&nums,int i,int j,int n){
        // Base condition: all passes completed
        if(i==n-1){
            return nums;
        }
        // Compare adjacent elements
        if(nums[j] > nums[j+1]){
            swap(nums[j],nums[j+1]);
        }
        if(j < n-i-2){
            return bubbleSort(nums,i,j+1,n);
        }

        // Start next pass
        return bubbleSort(nums,i+1,0,n);
    }
    vector<int> bubbleSort(vector<int>& nums) {
        int n=nums.size();
        if(n <= 1){
            return nums;
        }
        return bubbleSort(nums,0,0,n);
    }
};
