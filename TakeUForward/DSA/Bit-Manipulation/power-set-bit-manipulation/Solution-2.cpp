class Solution {
public:	
    vector<vector<int>>ans;
    vector<int>temp;

    void subset(vector<int>&nums,int index){
        ans.push_back(temp);

        for(int i=index; i<nums.size();i++){
            temp.push_back(nums[i]);
            subset(nums,i+1);
            temp.pop_back();
        }
    }
    vector<vector<int> > powerSet(vector<int>& nums) {
        ans.clear(); // reset
        temp.clear(); //reset
        subset(nums,0);
        return ans;
    }
};