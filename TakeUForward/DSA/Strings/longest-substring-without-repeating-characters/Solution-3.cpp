class Solution{
    //T O(n2) and S O(n)
  public:
    int longestNonRepeatingSubstring(string& s){
        int n=s.size();
        int maxlen=0;
        int len=0;
        for(int i=0; i<n;i++){
            unordered_map<char,int>mp; // the new empty map created after each iterator
            for(int j=i; j<n; j++){
                if(mp.find(s[j]) != mp.end()){
                    break;
                }
                mp[s[j]]=1; // means store the character s[j] in the map and mark it as visited.
                maxlen=max(j-i+1,maxlen);
            }
        }
        return maxlen;
    }
};