class Solution{   
public:    
    int minBitsFlip(int start, int goal) { 
        int count=0;

        int n=start^goal; // Find different bits using XOR

        //start = 1010
        //goal  = 0111
       // XOR   = 1101 here we clearly see that when bit same than goes 0 else 1.
       //than we count 1 bit.
        while(n > 0){
            count=count+ (n&1); // Check last bit
            n=n>>1;             // Shift right by one position
        }
        return count;
    }
};