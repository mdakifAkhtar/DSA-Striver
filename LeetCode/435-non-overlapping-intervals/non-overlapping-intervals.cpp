class Solution {
public:
    // T.C O(N Log N)
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int n=intervals.size();
        int count=0;

        // Sort intervals based on ending time (earliest ending first)
        sort(intervals.begin(),intervals.end(),
        [](vector<int>&a,vector<int>&b){
            return a[1] < b[1];
        });

        // Select the first interval and store its ending time
        int end=intervals[0][1];
        // Traverse the remaining intervals
        for(int i=1; i<n; i++){
            // If current interval starts before the previous end,
           // it means the intervals overlap
            if(intervals[i][0] < end){
                // Remove the current interval
                count++;
            }
            else{
                // No overlap, so keep the current interval
                // and update the ending time
                end=intervals[i][1];
            }
        }
        return count;
        
    }
};