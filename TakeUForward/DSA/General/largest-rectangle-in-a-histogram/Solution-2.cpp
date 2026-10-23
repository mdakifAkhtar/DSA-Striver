class Solution {
public:
    // T.C O(N)
    // S.C O(N)
    int largestRectangleArea(vector<int> &heights) {
        int n=heights.size();
        stack<int>st;
        int maxArea=0;

        for(int i=0; i<n; i++){
            while(!st.empty() && heights[st.top()] >= heights[i]){
                int element=st.top();
                st.pop();
                int nse=i;
                int pse=st.empty()?-1:st.top();
                int area=heights[element] * (nse-pse-1);
                maxArea=max(area,maxArea);
            }
            st.push(i);
        }
        // Process remaining bars whose next smaller element does not exist
       // Assume n as the next smaller element index
        while(!st.empty()){
            int element=st.top();
            st.pop();
            int nse=n;
            int pse=st.empty()?-1 : st.top();
            int area=heights[element]*(nse-pse-1);
            maxArea=max(area,maxArea);
        }
        return maxArea;
    }
};