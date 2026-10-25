class Solution {
public:
    vector<int> count_NGE(vector<int> &arr, vector<int> &indices) {
        int n=arr.size();
        int m=indices.size();
        vector<int>ans;

        for(int i=0; i<m; i++){
            int index=indices[i];
            int count=0;
            for(int j=index+1; j<n; j++){
                if(arr[j] > arr[index]){
                    count=count+1;
                }
            }
            ans.push_back(count);
        }
        return ans;
    }
};