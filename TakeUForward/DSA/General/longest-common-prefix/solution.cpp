class Solution{	
	public:
        //Time Complexity = O(N × M) where M is size of longset substring
        //Space Complexity: O(M)
		string longestCommonPrefix(vector<string>& str){
			int n=str.size();

            string prefix=str[0];
            
            for(int i=0; i<n; i++){
                int j=0;

                while( j< prefix.size() && j < str[i].size() && prefix[j] == str[i][j]){
                    j++;
                }
                prefix=prefix.substr(0,j);
                if(prefix==""){
                    return "";
                }
            }
            return prefix;
		}
};