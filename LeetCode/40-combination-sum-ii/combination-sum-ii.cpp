class Solution {
public:
    vector<vector<int>> ans;
    vector<int>temp;
    void backtrack(int index,vector<int>&nums,int target){
        if(target == 0){
            ans.push_back(temp);
            return;
        }

        if(index==nums.size() || target < 0){
            return;
        }
        for(int i=index; i<nums.size(); i++){
            // Skip duplicates
            if(i>index && nums[i]==nums[i-1]){
                continue;
            }
            // Since sorted, no further number can work
            if(nums[i]>target){
                break;
            }
            // Pick
            temp.push_back(nums[i]);
            // i + 1 because each number can be used only once
            backtrack(i+1,nums,target-nums[i]);
            // Backtrack
            temp.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        backtrack(0,candidates,target);
        return ans;
        
    }
};