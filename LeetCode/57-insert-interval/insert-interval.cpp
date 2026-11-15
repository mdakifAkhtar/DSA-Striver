class Solution {
public:
    // T.C O(N)
    // S.C 0(N)
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>>ans;
        int n=intervals.size();
        int i=0;
        
        // Case 1: Intervals before newInterval (before all are perfect)
        while(i < n && intervals[i][1] < newInterval[0]){
            ans.push_back(intervals[i]);
            i++;
        }
        
        // Case 2: Merge overlapping intervals
        while(i < n && intervals[i][0] <= newInterval[1]){
            newInterval[0]=min(newInterval[0],intervals[i][0]);
            newInterval[1]=max(newInterval[1],intervals[i][1]);
            i++;
        }
        // Add merged interval
        ans.push_back(newInterval);


       // Case 3: Remaining intervals
        while(i < n){
            ans.push_back(intervals[i]);
            i++;
        }
        return ans;
        
    }
};