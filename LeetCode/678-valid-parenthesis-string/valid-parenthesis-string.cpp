class Solution {
public:
    // T.C O(N)
    bool checkValidString(string s) {
        int mini=0;
        int maxi=0;

        for(int i=0; i<s.size(); i++){
            if(s[i] == '('){
                mini++;
                maxi++;
            }
            else if(s[i] == ')'){
                mini--;
                maxi--;
            }
            else{
                mini--;
                maxi++;
            }

            if(maxi < 0){
                return false;
            }
            if(mini < 0){ // means * will be opening
                mini=0;
            }
        }
        return mini==0;
        
    }
};