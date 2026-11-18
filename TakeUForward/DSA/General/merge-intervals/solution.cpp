class Solution {
public:
    vector<vector<int>> mergeIntervals(vector<vector<int>>& intervals) {
        int n=intervals.size();
        if(n <= 0){
            return intervals;
        }
        // Sort intervals based on starting time
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>ans;
        // Insert first interval
        ans.push_back(intervals[0]);

        for(int i=1; i<n; i++){
            // Check if current interval overlaps with last interval
            if(intervals[i][0] <= ans.back()[1]){
                ans.back()[1]=max(intervals[i][1],ans.back()[1]);
            }
            else{
                // No overlap, insert new interval
                ans.push_back(intervals[i]);
            }
        }
        return ans;
    }
};