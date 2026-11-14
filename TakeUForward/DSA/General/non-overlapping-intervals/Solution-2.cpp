class Solution {
public:
    // T.C O(NlogN)
    int MaximumNonOverlappingIntervals(vector<vector<int>>& Intervals) {
        int n=Intervals.size();
        if(n <= 0){
            return 0;
        }
        // Sort intervals based on ending time (earliest ending first)
        sort(Intervals.begin(),Intervals.end(),[](vector<int>&a,vector<int>&b){
            return a[1] < b[1];// lamda function
        });
        // Select the first interval and store its ending time
        int end=Intervals[0][1];
        int count=0;

        for(int i=1; i<n;i++){
            // If current interval starts before the previous end,
            // it means the intervals overlap
            if(Intervals[i][0] < end){
                count++;
            }
            else{
                // No overlap, so keep the current interval
                // and update the ending time
                end=Intervals[i][1];
            }
        }
        // Return the minimum number of intervals to remove
        return count;
    }
};