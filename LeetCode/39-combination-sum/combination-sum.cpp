class Solution {
public:
    vector<vector<int>> ans;
    vector<int> temp;
    void backtrack(int index, vector<int>& nums,int target){
        // target reached
        if(target==0){
            ans.push_back(temp);
            return;
        }
        // Out of bounds or target becomes negative
        if(index == nums.size() || target < 0){
            return;
        }
        // Pick
        temp.push_back(nums[index]);
        // Stay at same index because we can reuse the number
        backtrack(index,nums,target-nums[index]);
        
        temp.pop_back();

        //not pick
        backtrack(index+1,nums,target);

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        backtrack(0,candidates,target);
        return ans;
        
    }
};