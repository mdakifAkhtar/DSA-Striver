class Solution {
public:
    // T.C O(nlog n + mlog m)
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());

        int n=g.size(); 
        int m=s.size();

        int i=0; // Student pointer
        int j=0; // Cookie pointer
        int count=0;

        while(i < n && j <m){
            if(g[i] <= s[j]){
                count++;
                i++;   // Move to next student
                j++;   // Move to next cookie
            }
            else{
                j++;   // Cookie is too small, try the next cookie
            }
        }
        return count;
        
    }
};