class Solution {
public:
    // T.C O(N2)
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>ans;

        sort(nums.begin(),nums.end());

        for(int i=0; i<n; i++){
            if(i > 0 && nums[i] == nums[i-1]){
                continue;
            }
            unordered_set<int>st;

            for(int j=i+1; j<n; j++){

                int need=0-(nums[i] + nums[j]);
                if(st.find(need) != st.end()){
                    ans.push_back({nums[i],need,nums[j]});

                    // Skip duplicate second elements
                    while(j+1<n && nums[j] == nums[j+1]){
                        j++;
                    }
                }
                st.insert(nums[j]);
            }
        }
        return ans;
        
    }
};