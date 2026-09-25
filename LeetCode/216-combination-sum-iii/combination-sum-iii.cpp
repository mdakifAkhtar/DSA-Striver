class Solution {
public:
    vector<vector<int>>ans;
    vector<int>temp;
    void backtrack(int index,int k,int n){
        // Valid combination
        if(temp.size()==k){
            if(n==0){
                ans.push_back(temp);
            }
            return;
        }

        // Try numbers from index to 9
        for(int i=index; i<=9; i++){

            // If number is greater than remaining sum, stop
            if(i>n){
                break;
            }
            
            temp.push_back(i);
           // i + 1 because numbers cannot repeat
           backtrack(i+1,k,n-i);
           temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        backtrack(1,k,n);
        return ans;
        
    }
};