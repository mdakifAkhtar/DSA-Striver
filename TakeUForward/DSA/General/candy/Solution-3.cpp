class Solution {
public:
    int candy(vector<int>& ratings) {
        int n=ratings.size();
        int sum=1;
        int i=1;

        while(i < n){
            // Equal ratings: give 1 candy
            if(ratings[i] == ratings[i-1]){
                sum=sum+1;
                i++;
                continue;
            }

            // Count increasing slope (peak)
            int peak=0;
            while(i < n && ratings[i] > ratings[i-1]){
                peak++;
                sum=sum+peak+1;
                i++;
            }

            // Count decreasing slope (down)
            int down=0;
            while(i < n && ratings[i] < ratings[i-1]){
                down++;
                sum=sum+down;
                i++;
            }

            // Adjust peak if decreasing slope is longer
            if(down > peak){
                sum=sum + (down - peak);
            }
        }
        return sum;
    }
};