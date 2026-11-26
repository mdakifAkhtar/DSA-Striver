class Solution{	
public:		
    string largeOddNum(string& s){
        int n=s.size();

        int l=0;
        while(l < n && s[l]=='0'){
            l++;
        }

        for(int i=n-1; i>=0; i--){
            if((s[i]-'0')% 2 != 0){
                return s.substr(l,i-l+1);
            }
        }
        return "";
    }
};