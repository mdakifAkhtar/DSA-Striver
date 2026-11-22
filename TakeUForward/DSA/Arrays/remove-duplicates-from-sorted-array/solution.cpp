class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int i=0;

        for(int j=1; j<n; j++){
            if(nums[j] != nums[i]){
                nums[i+1]=nums[j];
                i++;
            }
        }

        return i+1; //number of unique element and i +1 because i start with 0;
    }
};