class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        string ans="";
        int i=n-1;

        while(i >=0){
            while(i >=0 && s[i]==' '){// spaces
                i--;
            }
        
            if(i < 0){
                break;
            }
            int j=i; // i is at the END of the word

            while(j>=0 && s[j] != ' '){
                j--;// Find the beginning
            }
            if(!ans.empty()){
                ans=ans+" ";
            }
            ans=ans+ s.substr(j+1,i-j);
            i=j;
        }
        return ans;
       
    } 
};