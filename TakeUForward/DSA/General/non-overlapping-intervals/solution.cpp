class Solution {
public:
    static bool comparator(pair<int,int>a,pair<int,int>b){
        return a.second < b.second;
    }
    int MaximumNonOverlappingIntervals(vector<vector<int>>& Intervals) {
        int n=Intervals.size();
        if(n <= 0){
            return 0;
        }
        // Convert 2D vector into pairs
        vector<pair<int,int>>a(n);
        for(int i=0; i<n; i++){
            a[i].first=Intervals[i][0];
            a[i].second=Intervals[i][1];
        }
        // Sort intervals by ending time
        sort(a.begin(),a.end(),comparator);

        int end=a[0].second;
        int count=0;
        // Traverse remaining intervals
        for(int i=1; i<n; i++){
            // If current interval overlaps with previous interval
            if(a[i].first < end){
                count++;
            }
            else{
                // Select current interval and update ending time
                end=a[i].second;
            }
        }
        // Return maximum number of intervals to remove
        return count;
    }
};