class Solution {
public:
    int partition(vector<int>&nums,int low,int high){
        int pivot=nums[high];
        int i=low-1;

        for(int j=low; j< high; j++){
            if(nums[j] < pivot){
                i++;
                swap(nums[i],nums[j]);
            }
        }
        swap(nums[i+1],nums[high]);
        return i+1;
    }
    void quickSort(vector<int>&nums,int low,int high){
        if(low < high){
            int pivot=partition(nums,low,high);
            quickSort(nums,low,pivot-1);
            quickSort(nums,pivot+1,high);
        }
    }
    vector<int> quickSort(vector<int>& nums) {
        int n=nums.size();
        quickSort(nums,0,n-1);
        return nums;
    }
};
