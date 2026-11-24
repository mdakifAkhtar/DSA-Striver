class Solution {
public:
    // T.C O(N3)
    // S.C O(N)
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<vector<int>>ans;

        sort(nums.begin(),nums.end());
        set<vector<int>>st;

        for(int i=0; i<n; i++){
            if(i > 0 && nums[i] == nums[i-1]){
                continue;
            }
            for(int j=i+1; j<n; j++){
                if(j>i+1 && nums[j]==nums[j-1]){
                    continue;
                }
                set<long long>set; // set
                for(int k=j+1; k<n; k++){
                    long long sum=(long long) nums[i]+nums[j] + nums[k];
                    long long need=(long long)target-sum;

                    if(set.find(need) != set.end()){
                        vector<int>temp={nums[i],nums[j],(int)need,nums[k]};
                        sort(temp.begin(),temp.end());
                        st.insert(temp);
                    }
                    set.insert(nums[k]);
                }
            }
        } 
        return vector<vector<int>>(st.begin(),st.end());       
    }
};