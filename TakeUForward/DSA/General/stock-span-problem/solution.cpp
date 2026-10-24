class Solution
{
    public:
    vector <int> stockSpan(vector<int> arr, int n) {
        stack<pair<int,int>>st;

        vector<int>ans;
        for(int i=0; i<n;i++){
            int span=1;
            while(!st.empty() && st.top().first <= arr[i]){
                span=span+st.top().second;
                st.pop();
            }
            st.push({arr[i],span});
            ans.push_back(span);
        }
        return ans;
    }
};
