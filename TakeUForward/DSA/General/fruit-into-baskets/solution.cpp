class Solution{
  public:
    int totalFruits(vector<int>& fruits){
        int n=fruits.size();
        int l=0;
        int r=0;
        int maxfruit=0;
        unordered_map<int,int>mp;

        while(r<n){
            mp[fruits[r]]++;
            while(mp.size() > 2){
                mp[fruits[l]]--;
                if(mp[fruits[l]]==0){
                    mp.erase(fruits[l]);
                }
                l++;
            }
            maxfruit=max(maxfruit,r-l+1);
            r++;
        }
        return maxfruit;
    }
};