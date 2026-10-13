class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.size();
        int left=0;
        int right=0;
        int maxfreq=0;
        int maxlen=0;
        unordered_map<char,int>mp;

        while(right <n){
            mp[s[right]]++;

            maxfreq=max(maxfreq,mp[s[right]]);

            int changes=(right-left+1)-maxfreq;

            if(changes > k){
                mp[s[left]]--;
                left++;
            }

            maxlen=max(maxlen,right-left+1);
            right++;
        }
        return maxlen;
    }
};