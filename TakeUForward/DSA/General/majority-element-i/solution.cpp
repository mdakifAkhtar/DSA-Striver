class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        int majority=INT_MIN;
    

        for(int i=0; i<n; i++){
            if(count == 0){
                majority=nums[i];
            }

            if(majority==nums[i]){
                count++;
            }
            
            else{
                count--;
            }
        }
        return majority;
    }
};