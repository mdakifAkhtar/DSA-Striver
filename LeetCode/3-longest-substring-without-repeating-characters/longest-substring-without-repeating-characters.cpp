class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int l=0;//LEFT POINTER.
        int r=0;//RIGHT POINTER
        int maxlen=0;
        unordered_map<char,int> mp;

        while(r < n){
            if(mp.find(s[r]) != mp.end()){
                l=max(l,mp[s[r]]+1); // update l where repeat character
            }
            maxlen=max(maxlen,r-l+1); // max length

            mp[s[r]]=r; // store current character
            r++;
        }
        return maxlen;
        
    }
};