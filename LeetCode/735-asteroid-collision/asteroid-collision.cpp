class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int n=asteroids.size();
        stack<int>st;
        vector<int>ans;

        for(int i=0; i<n; i++){
            bool destroyed=false;

            while(!st.empty() && st.top() > 0 && asteroids[i] < 0){
                // The asteroid on the stack is smaller
                if(st.top() < abs(asteroids[i])){
                    st.pop();
                    continue;
                }
                // Both asteroids have the same size
                else if(st.top()==abs(asteroids[i])){
                    st.pop();
                    destroyed=true;
                    break;
                }
                // The asteroid on the stack is larger
                else{
                    // The asteroid on the stack is larger
                    destroyed=true;
                    break;
                }
            }
            // Push only if the current asteroid survives
            if(!destroyed){
                st.push(asteroids[i]);
            }
        }
        // Convert stack into the answer in the correct order
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        // Restore the original order
        reverse(ans.begin(),ans.end());
        return ans;
    } 
};