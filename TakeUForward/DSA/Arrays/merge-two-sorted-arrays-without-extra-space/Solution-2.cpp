class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m-1;
        int j=n-1;
        int idx=m+n-1;

        while(i >= 0 && j >= 0){
            if(nums1[i] > nums2[j]){
                nums1[idx]= nums1[i];
                i--;
            }
            else{
                nums1[idx]=nums2[j];
                j--;
            }
            idx--;
        }
        //The remaining elements of nums1 are smaller than or equal to the elements already placed, so they don’t need to move.
        while(j >= 0){
            nums1[idx]=nums2[j];
            j--;
            idx--;
        }
        
    }
};