class Solution{	
	public:
		bool rotateString(string& s,string& goal){
			int n=s.size();
            if(n != goal.size()){
                return false;
            }
            string temp=s+s;
            
            if(temp.find(goal) != string::npos){ //string::npos means the substring was not found.No position
                return true;
            }
            return false;
		}
};