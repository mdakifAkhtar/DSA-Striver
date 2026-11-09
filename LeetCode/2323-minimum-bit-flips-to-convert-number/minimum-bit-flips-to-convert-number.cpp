class Solution {
public:
    // T.C O(LogN)
    int minBitFlips(int start, int goal) {
        int count=0;
        int n=start^goal; // XOR both same than give 0 else 1. Find different bits using XOR
        //start = 1010
        //goal  = 0111
        //XOR   = 1101 here we can se unmatch goues to 1 match bit goes 0.

        while(n > 0){
            count=count + (n & 1); // Check last bit
            n=n>>1;    // Shift right by one position
        }
        return count;
        
    }
};