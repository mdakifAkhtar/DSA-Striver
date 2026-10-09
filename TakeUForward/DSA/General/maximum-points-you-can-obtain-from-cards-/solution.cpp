class Solution{
  public:
    int maxScore(vector<int>& cardScore , int k){
        int n=cardScore.size();
        int leftsum=0;
        int rightsum=0;
        int maxsum=0;

        for(int i=0; i<k; i++){
            leftsum=leftsum+cardScore[i];
        }
        maxsum=leftsum;
        int right=n-1;
        for(int i=k-1; i>=0; i--){
            leftsum=leftsum-cardScore[i];
            rightsum=rightsum + cardScore[right];
            right--;
            maxsum=max(maxsum,leftsum+rightsum);
        }

        return maxsum;
    }
};