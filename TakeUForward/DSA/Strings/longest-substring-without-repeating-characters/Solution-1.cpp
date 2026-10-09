class Solution{
  public:
    int longestNonRepeatingSubstring(string& s){
        int n=s.size();
        int l=0;
        int r=0;
        int maxlength=0;
        unordered_map<char,int> mp;
        while(r < n){
            // If character repeats, move l after its previous index
            if(mp.find(s[r]) != mp.end()){
                l=max(l,mp[s[r]]+1);// update l when first character repeat.
            }
            // Update maximum length of the current substring
            maxlength=max(maxlength,r-l+1);
            // Store the current character's latest index
            mp[s[r]]=r;
            // Expand the window to the right
            r++;
        }  
        return maxlength;     
    }
};