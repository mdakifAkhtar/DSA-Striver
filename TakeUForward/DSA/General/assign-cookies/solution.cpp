class Solution{    
    public:
    // T. C O(nlog n + mlog m)
    int findMaximumCookieStudents(vector<int>& Student, vector<int>& Cookie){
        sort(Student.begin(),Student.end());
        sort(Cookie.begin(),Cookie.end());
        int n=Student.size();
        int m=Cookie.size();

        int i=0; // Student pointer
        int j=0; // Cookie pointer
        int count=0;
        
        while(i < n && j < m){
            if(Student[i] <= Cookie[j]){
                count++;
                i++;
                j++;
            }
            else {
                j++;
            }
        }
        return count;
    }
};