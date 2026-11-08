class Solution {
public:
    bool isPowerOfTwo(int n) {
        // Power of two must be positive
        if(n <= 0){
            return false;
        }
        // A power of two contains exactly one set bit (1)
        // n & (n-1) removes the rightmost set bit
        // If the result is 0, n is a power of two
        if((n & (n-1)) == 0){
            return true;
        }
        return false;
    }
};