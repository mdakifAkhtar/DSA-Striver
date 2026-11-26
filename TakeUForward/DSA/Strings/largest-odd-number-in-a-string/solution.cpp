class Solution{	
public:		
    string largeOddNum(string& s){
        int n=s.size();
        int l=0;
        int r=n-1;

        while(l < n && s[l]=='0'){
            l++;
        }

        while( r >= l){
            if((s[r]-'0') %2 != 0){
                return s.substr(l,r-l+1); // start,range
            }
            else{
                r--;
            }
        }
        return "";
    }
};