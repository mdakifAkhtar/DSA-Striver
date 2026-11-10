class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend == INT_MIN && divisor == -1){
            return INT_MAX;
        }
         // Convert both numbers into positive values
        long long a=abs((long long)dividend);
        long long b=abs((long long)divisor);
        long long ans=0;

        // Continue while dividend is greater than or equal to divisor
        while(a>=b){
            // Initially, temp stores the divisor
            long long temp=b;
            // Initially, count represents one diviso
            long long count=1;

            // Double temp using left shift until it exceeds a
            while(a >= (temp<<1)){
                temp=temp << 1; // Double the divisor
                count=count<<1; // Double the corresponding quotient
            }
            // Subtract the largest possible divisor from dividend
            a=a-temp;
            // Add the corresponding quotient to the answer
            ans=ans+count;
        }
        // If exactly one number is negative, make answer negative
        if((dividend <0) ^ (divisor < 0)){
            ans=-ans;
        }

        return int(ans);
        
    }
};