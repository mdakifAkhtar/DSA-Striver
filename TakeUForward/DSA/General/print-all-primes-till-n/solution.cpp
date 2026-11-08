class Solution{
    public:
        vector<int> primeTillN(int n){
            vector<int>ans;
            if(n < 2){
                return ans;
            }
           vector<bool>isprime(n+1,true); // n+1 create 0 to n.
           isprime[0]=isprime[1]=false;

            for(int i=4; i<=n; i=i+2){ // 2 is only even prime number
                isprime[i]=false;
            }

            for(int i=3; i*i <= n; i=i+2){
                if(isprime[i]){
                    for(int j=i*i; j<=n; j=j+2*i){
                        isprime[j]=false;
                    }
                }
            }

            for(int i=2;i<=n; i++){
                if(isprime[i]){
                    ans.push_back(i);
                }
            }
            return ans;
        }
};