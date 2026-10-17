class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        vector<int>ans;
        stack<int>st;
        unordered_map<int,int>mp;
         // Traverse nums2 from right to left
        for(int i=n2-1; i>=0; i--){// Remove elements smaller than or equal to nums2[i]
            while(!st.empty() && st.top() <= nums2[i]){
                st.pop();
            }
            // Store the next greater element
            if(st.empty()){
                mp[nums2[i]]=-1;
            }
            else{
                mp[nums2[i]]=st.top();
            }
            // Push the current element onto the stack
            st.push(nums2[i]);
        }

         // Find answers for nums1 using the map
        for(int i=0; i<n1;i++){
            ans.push_back(mp[nums1[i]]);
        }
        return ans;
        
    }
};