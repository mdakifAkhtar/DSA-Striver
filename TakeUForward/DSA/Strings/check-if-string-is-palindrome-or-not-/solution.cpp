class Solution{	
	public:	
        bool ispalindrome(string &s,int i,int j){
            if(i >= j){
                return true;
            }
            if(s[i] != s[j]){
                return false;
            }
            return ispalindrome(s,i+1,j-1);
        }	
		bool palindromeCheck(string& s){
			int n=s.size();
            return ispalindrome(s,0,n-1);
		}
};