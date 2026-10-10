class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n=fruits.size();
        int l=0;
        int r=0;
        int maxtree=0;
        unordered_map<int,int>mp;

        while(r < n){
            mp[fruits[r]]++; // Add the current fruit to the window
            while(mp.size() > 2){ // Shrink window if more than 2 fruit types
                mp[fruits[l]]--;// Decrease frequency of the leftmost fruit
                if(mp[fruits[l]]==0){
                    mp.erase(fruits[l]);// Remove fruit type if its frequency is zero
                }
                l++;
            }
            maxtree=max(maxtree,r-l+1); // Update maximum length of the valid window
            r++;
        }
        return maxtree;  
    }
};