class Solution {
public:
    vector<vector<int>> insertNewInterval(vector<vector<int>>& Intervals, vector<int>& newInterval){
        vector<vector<int>> ans;
        int n=Intervals.size();
        int i=0;
        
        // Case 1: Intervals completely before newInterval (before newInteraval are are perfect)
        while(i <n && Intervals[i][1] < newInterval[0]){
            ans.push_back(Intervals[i]);
            i++;
        }
        
        // Case 2: Merge overlapping intervals
        while(i <n && Intervals[i][0] <= newInterval[1]){
            newInterval[0]=min(newInterval[0],Intervals[i][0]);
            newInterval[1]=max(newInterval[1],Intervals[i][1]);
            i++;
        }
        // Add merged interval
        ans.push_back(newInterval);
        // Case 3: Intervals completely after newInterval
        while(i <n){
            ans.push_back(Intervals[i]);
            i++;
        }
        return ans;
    }
};