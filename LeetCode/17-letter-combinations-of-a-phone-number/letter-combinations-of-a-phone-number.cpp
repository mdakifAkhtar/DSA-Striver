class Solution {
public:
    string temp;
    vector<string> ans;
    string keypad[10]={
        "","","abc","def",
        "ghi","jkl","mno",
        "pqrs","tuv","wxyz"
    };
    void backtrack(int index,string &digits){
        //Base Case
        if(index==digits.size()){
            ans.push_back(temp);
            return;
        }
        string letters =keypad[digits[index]-'0'];
        
        for(char ch : letters){
            //pick
            temp.push_back(ch);
            // Move to next digits
            backtrack(index+1,digits);

            temp.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        if(digits.empty()){
            return {};
        }
        backtrack(0,digits);
        return ans;
    }
};