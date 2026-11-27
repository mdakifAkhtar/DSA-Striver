class Solution{	
	public:
        long long int fact(int i,long long int sum,int n){
            if(i > n){
                return sum;
            }
            sum=sum*i;
            return fact(i+1,sum,n);

        }
		long long int factorial(int n){
			long long sum=1;
            return fact(1,sum,n);
		}
};