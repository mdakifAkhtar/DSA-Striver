class Solution{	
	public:	
        void reverse(vector<char>&s,int l, int r){
            if(l > r){
                return;
            }
            swap(s[l],s[r]);
            return reverse(s,l+1,r-1);
        }	
		void reverseString(vector<char>& s){
            int n=s.size();
            int l=0;
            int r=n-1;
			reverse(s,l,r);
		}
};