class Solution {
public:
    // Time = O(log n) + O(log n)=O(log n)
    long long power(long long a, long long b,long long mod){
        long long ans=1;
        while(b > 0){
            if(b%2==1){
                ans=(ans * a) % mod;
            }
            a=(a*a) % mod;
            b=b/2;
        }
        return ans;

    }
    int countGoodNumbers(long long n) {
        long long MOD=1000000007;
        long long even=(n+1)/2;
        long long odd=n/2;

        long long evenPow=power(5,even,MOD);
        long long oddPow=power(4,odd,MOD);

        return (evenPow * oddPow) % MOD;
        
    }
};