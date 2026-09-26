class Solution {
public:
    vector<string> temp;
    vector<vector<string>> ans;
    bool isPalindrome(string s,int left,int right){
        while(left < right){
            if(s[left] != s[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
    void backtrack(int index, string &s){
        if(index==s.size()){
            ans.push_back(temp);
            return;
        }

        for(int i=index; i<s.size(); i++){
            if(isPalindrome(s,index,i)){
                temp.push_back(s.substr(index,i-index+1));

                backtrack(i+1,s);
                temp.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        backtrack(0,s);
        return ans;
        
    }
};