class Solution{	
public:	
    vector<char> reverse(int i,int j,vector<char>& s){
        if(i >= j){
            return s;
        }
        swap(s[i],s[j]);
        return reverse(i+1,j-1,s);
    }
	vector<char> reverseString(vector<char>& s){
		int n=s.size();
        return reverse(0,n-1,s);
	}
};