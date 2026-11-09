class Solution {
public:
    // T.C O(Logn)
    // S.C O(1)
    int countSetBits(int n) {
        int count=0;
        while(n >0){
        count=count+(n&1);  // Check the last bit (if 1, increment count)
        n=n>>1;             // Shift all bits one position to the right
                            // This removes the last bit
        }
        return count;
    }
};