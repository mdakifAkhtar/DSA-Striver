class Solution {
public:
    vector<int> selectionSort(vector<int>& nums) {
        for(int i=0; i< nums.size(); i++){
            for(int j=i+1; j<nums.size(); j++){
                if(nums[j] < nums[i]){
                    swap(nums[j],nums[i]);
                }
            }
        }
        return nums;

    }
};
