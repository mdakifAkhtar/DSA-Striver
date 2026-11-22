class Solution {
public:
    void rotateArray(vector<int>& nums, int k) {
        int n=nums.size();
        if (n==0) return;
        k=k%n;
        vector<int>temp(k);

        // Store first k elements
        for(int i=0;i<k;i++){
            temp[i]=nums[i];
        }

        // Shift remaining elements to the left
        for(int i=k; i<n;i++){
            nums[i-k]=nums[i];
        }

        // Place stored elements at the end
        for(int i=0; i < k; i++){
            nums[n-k+i]=temp[i];
        }
    }
};