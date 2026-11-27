class Solution{	
	public:
		vector<char> frequencySort(string& s){
			unordered_map<char,int>mp;

            for(auto it : s){
                mp[it]++;
            }

            vector<pair<int,char>>v;

            for(auto it : mp){
                v.push_back({it.second,it.first});
            }
            sort(v.begin(),v.end(),[](auto a, auto b){
                if(a.first != b.first){
                    return a.first > b.first;
                }
                return a.second < b.second;
            });
            
            vector<char>ans;
            for(auto it : v){
                int freq=it.first;
                char ch=it.second;

                ans.push_back(ch);
            }
            return ans;
		}
};