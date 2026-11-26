class Solution {
public:
    int mostFrequentElement(vector<int>& nums) {
        int i=nums.size();
        unordered_map<int,int>mp;

        for(auto it : nums){
            mp[it]++;
        }

        int maxfreq=0;
        int ans=INT_MAX;

        for(auto it: mp){
            if(it.second > maxfreq){
                maxfreq=it.second;
                ans=it.first;
            }
            else if( it.second == maxfreq){
                ans=min(ans,it.first);
            }
        }
        return ans;
    }
};