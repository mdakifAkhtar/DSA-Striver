class Solution {
public:
    vector<int> findNSE(vector<int>&nums){
        int n=nums.size();
        stack<int>st;
        vector<int>nse(n);
        for(int i=n-1; i>=0; i--){
            while(!st.empty() && nums[st.top()] >= nums[i]){
                st.pop();
            }
            nse[i]=st.empty() ? n : st.top();
            st.push(i);
        }
        return  nse;
    }

    vector<int> findPSE(vector<int>&nums){
        int n=nums.size();
        stack<int>st;
        vector<int>pse(n);

        for(int i=0;i<n; i++){
            while(!st.empty() && nums[st.top()] >= nums[i]){
                st.pop();
            }
            pse[i]=st.empty()? -1:st.top();
            st.push(i);
        }
        return pse;
    }
    int largestRectangleArea(vector<int> &heights) {
        int n=heights.size();
        int maxArea=0;
        vector<int>pse=findPSE(heights);
        vector<int>nse=findNSE(heights);
        for(int i=0; i<n; i++){
            int leftSmaller=pse[i];
            int rightSmaller=nse[i];
            int area=heights[i] * (rightSmaller-leftSmaller-1);
            maxArea=max(maxArea,area);
        }
        return maxArea;
     
    }
};