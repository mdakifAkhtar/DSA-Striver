class Solution{	
	public:
		bool anagramStrings(string &s,string &t){
			int n=s.size();

            if(n != t.size()){
                return false;
            }
            unordered_map<char,int>mp;

            for(auto x:s){
                mp[x]++;
            }

            for(auto x : t){
                mp[x]--;

                if(mp[x] < 0){
                    return false;
                }
            }
            return true;
            
		}
};