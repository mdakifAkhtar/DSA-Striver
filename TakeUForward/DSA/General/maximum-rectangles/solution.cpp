class Solution
{
public:
    int largestRectangleArea (vector<int>& heights){
        int n=heights.size();
        stack<int>st;
        int maxArea=0;

        for(int i=0; i<n; i++){
            while(!st.empty() && heights[st.top()] >= heights[i]){
                int element=st.top();
                st.pop();

                int NSE=i;
                int PSE=st.empty()? -1 : st.top();

                int area=heights[element]* (NSE-PSE-1);
                maxArea=max(area,maxArea);
            }
            st.push(i);
        }
         while(!st.empty()){
            int element=st.top();
            st.pop();

            int NSE=n;
            int PSE=st.empty()? -1 : st.top();

            int area=heights[element]* (NSE-PSE-1);
            maxArea=max(area,maxArea);
        }
        return maxArea;
    }
    int maximalAreaOfSubMatrixOfAll1(vector<vector<int>> &matrix){
        if(matrix.empty() || matrix[0].empty()){
            return 0;
        }

        int m=matrix.size();
        int n=matrix[0].size();

        vector<int>height(n,0);
        int maxArea=0;

        for(int i=0; i<m; i++){
            // Build histogram heights for the current row
            for(int j=0; j<n; j++){

                if(matrix[i][j]==1){
                    height[j]++;        // heights[j]=height[j]+1 if 1.
                }
                else{
                    height[j]=0;
                }

            }
            maxArea=max(maxArea,largestRectangleArea(height));
        }
        return maxArea;
       
    }
};