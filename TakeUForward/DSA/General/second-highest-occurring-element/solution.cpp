class Solution {
public:
    // T.C O(N)
    // S.C O(N)
    int secondMostFrequentElement(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;

        for(auto it : nums){
            mp[it]++;
        }

        int maxFreq=0;
        int SecondMaxFreq=0;
        int ans1=INT_MAX;
        int ans2=INT_MAX;

        for(auto it : mp){
            if(it.second > maxFreq){
                SecondMaxFreq=maxFreq;
                ans2=ans1;

                maxFreq=it.second;
                ans1=it.first;

            }
            else if(it.second == maxFreq){
                ans1=min(ans1,it.first);
            }

            else if(it.second > SecondMaxFreq){
                SecondMaxFreq=it.second;
                ans2=it.first;
            }
            else if(it.second == SecondMaxFreq){
                ans2=min(ans2,it.first);
            }
        }

        return ans2 == INT_MAX ? -1 : ans2;
    
    }
};