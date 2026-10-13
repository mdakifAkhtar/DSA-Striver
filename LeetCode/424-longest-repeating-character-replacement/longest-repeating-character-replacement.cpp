class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.size();
        int maxfreq=0;
        int maxlen=0;
        int left=0;
        int right=0;
        unordered_map<char,int>mp;

        while(right<n){
            mp[s[right]]++; // frequency count each character.
            
            // Track the maximum frequency of a character in the window.
            maxfreq=max(maxfreq,mp[s[right]]);

            // Minimum replacements needed = window length - maximum frequency.
            int changes=(right-left+1)-maxfreq;
            // Shrink the window if replacements exceed k.
            if(changes>k){
                mp[s[left]]--; // Decrease the frequency of the leftmost character.
                left++;
            }
            maxlen=max(maxlen,right-left+1);
            right++;
        }
        return maxlen;
    }
};