class Solution{	
	public:		
		bool palindromeCheck(string& s){
			 int n=s.size();
             string original=s;

             int l=0;
             int r=n-1;
             while(l <= r){
                swap(s[l],s[r]);
                l++;
                r--;
             }
             if(original == s){
                return true;
             }
             else{
                return false;
             }
		}
};