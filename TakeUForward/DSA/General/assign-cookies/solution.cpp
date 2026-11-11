class Solution{    
    public:
    int findMaximumCookieStudents(vector<int>& Student, vector<int>& Cookie){
        sort(Student.begin(),Student.end());
        sort(Cookie.begin(),Cookie.end());
        int n=Student.size();
        int m=Cookie.size();

        int i=0;
        int j=0;
        int count=0;
        while(i < n && j < m){
            if(Student[i] <= Cookie[j]){
                count++;
                i++;
                j++;
            }
            else if(Student[i] > Cookie[j]){
                j++;
            }
        }
        return count;
    }
};