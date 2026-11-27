class Solution{	
	public:
        int Sums(int i,int sum, int n){
            if(i > n){
                return sum;
            }
            sum=sum+i;
            return Sums(i+1,sum,n);
        }
		int NnumbersSum(int N){
			int sum=0;
            int i=1;
            return Sums(i,sum,N);
		}
};