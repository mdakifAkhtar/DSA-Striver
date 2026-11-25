class Solution {
public:
    vector<int> findMissingRepeatingNumbers(vector<int> nums) {
        int n=nums.size();
        int ActualSum=0;
        int ExpectedSum=0;

        long long ActualSquareSum=0;
        long long ExpectedSquareSum=0;

        for(int i=1; i<= n; i++){
            ExpectedSum=ExpectedSum + i;
            ExpectedSquareSum= ExpectedSquareSum + (long long)i * i;
        }

        for(int i=0; i<n; i++){
            ActualSum=ActualSum+nums[i];
            ActualSquareSum=ActualSquareSum + (long long)nums[i] * nums[i];
        }

        long long diff=ActualSum-ExpectedSum;
        long long squareDiff=ActualSquareSum-ExpectedSquareSum;

        long long sum=squareDiff/diff;

        long long repeating=(diff + sum)/2;
        long long missing=sum-repeating;

        return {(int)repeating,(int)missing};

    }
};