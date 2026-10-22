class Solution
{
public:
    int trap(vector<int> &height){
        int n=height.size();
        if(n==0)return 0;
        vector<int>leftMax(n,0);
        vector<int>rightMax(n,0);

        leftMax[0]=0; // initilize with starting index value zero
        rightMax[n-1]=0; // initilizing ending value zero

        // Calculate left maximum
        for(int i=1; i<n; i++){
            leftMax[i]=max(leftMax[i-1],height[i-1]);
        }

        // Calculate right maximum
        for(int i=n-2; i>=0; i--){
            rightMax[i]=max(rightMax[i+1],height[i+1]);
        }

        int ans=0;
        // Calculate trapped water
        for(int i=0; i<n; i++){
            // for negative value like right is taller but left is smalller min(3,4)-5=-2
            ans=ans+max(0, min(leftMax[i],rightMax[i])-height[i]);
        }
        return ans;
        
    }
};