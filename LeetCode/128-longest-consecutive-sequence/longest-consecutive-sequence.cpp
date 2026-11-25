class Solution {
public:
    // T.C O(N)
    // S.C O(N)
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n == 0){
            return 0;
        }

        unordered_set<int>st;

        // Insert all elements
        for(int i=0; i<n; i++){
            st.insert(nums[i]);
        }
        
        int longest=0;
        for(auto num : st){
            // Check if num is the starting point
            if(st.find(num-1) == st.end()){
                int count=1;
                int x=num;
                
                // Count consecutive elements
                while(st.find(x+1) != st.end()){
                    x++;
                    count++;
                }
                longest=max(longest,count);

            }
        }
        return longest;
        
        
    }
};