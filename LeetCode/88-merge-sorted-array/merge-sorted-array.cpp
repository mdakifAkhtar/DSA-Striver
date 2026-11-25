class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        int left=m-1;
        int right=n-1;
        int index=m+n-1;

        while(right >= 0){
            if(left >= 0 && nums1[left] >= nums2[right]){
                nums1[index]=nums1[left];
                left--;
            }
            else{
                nums1[index]=nums2[right];
                right--;

            }
            index--; // til 0/
        }

        /*int left=m-1; //last valid elements from nums1;
        int right=0;  //nums2 start from 0;

        while(left >= 0 && right < n){
            if(nums1[left] > nums2[right]){
                swap(nums1[left],nums2[right]);
                left--;
                right++;
            }
            else{
                break;
            }
        }
        // restore sorted array.
            sort(nums1.begin(), nums1.begin() +m);
            sort(nums2.begin(), nums2.end());*/


        // O(n+m) + O(n+m); space O(n+m);
        /*vector<int> temp(m+n);
        int left=0; // for arr1
        int right=0; // for arr2
        int index=0;
        while(left < m && right <n){
            if(nums1[left] <= nums2[right]){
                temp[index] = nums1[left];
                left++;
                index++;
            }
            else{
                temp[index]=nums2[right];
                right++;
                index++;
            }
        }
        // remaining from nums1
        while(left <m){
            temp[index++]=nums1[left++];
        }
        // remaining from nums2
        while(right < n){
            temp[index++]=nums2[right++];
        }

        // converting into previous array with merge;

        for(int i=0; i<m+n; i++){
           nums1[i]=temp[i];
        }   */
    }
};