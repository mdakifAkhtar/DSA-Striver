class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend == INT_MIN && divisor==-1){
            return INT_MAX;
        }

        long long a=abs((long long)dividend);
        long long b=abs((long long)divisor);
        long long ans=0;
        // Double temp using left shift until it exceeds a
        while(a >= b){
            long long temp=b;
            long long count=1;

            while(a >= temp<<1){
                temp=temp<<1;    // Double the divisor
                count=count<<1;    // Double the corresponding quotient
            }
            // Subtract the largest possible divisor from dividend
            a=a-temp;
            // Add the corresponding quotient to the answer
            ans=ans+count;
        }
         // If exactly one number is negative, make answer negative
        if((dividend < 0)^(divisor<0)){
            ans=-ans;
        }

        return int(ans);
        
    }
};