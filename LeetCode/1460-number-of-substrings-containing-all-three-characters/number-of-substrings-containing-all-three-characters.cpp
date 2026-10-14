class Solution {
public: // T.C O(n)
    int numberOfSubstrings(string s) {
        int n=s.size();
        int count=0;
        int left=0;
        int right=0;
        unordered_map<char, int>mp;
        while(right < n){
            mp[s[right]]++;
            // Shrink the window while it contains all three characters.
            while(mp.size()==3){
                 // Count all valid substrings ending at right or later.
                count=count + (n-right);

                mp[s[left]]--;
                if(mp[s[left]]==0){
                    mp.erase(s[left]);
                }
                left++;
            }
            right++;
        }
        return count;
        
    }
};