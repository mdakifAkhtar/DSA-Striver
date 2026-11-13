class Solution {
public:
    // T.C O(NlogN)
    double fractionalKnapsack(vector<long long>& val, vector<long long>& wt, long long capacity) {
        int n=val.size();
        vector<pair<double,int>> items;
        if(capacity==0 && n ==0 ){
            return 0;
        }

        for(int i=0; i<n; i++){
            double ratio=(double)val[i]/wt[i];
            items.push_back({ratio,i});
        }
        sort(items.rbegin(),items.rend()); // sort by ratio

        double sum=0;
        for(int i=0; i<n; i++){
            int idx=items[i].second;
            if(capacity >= wt[idx]){
                sum=sum + val[idx];
                capacity=capacity- wt[idx];
            }

            else{
                sum=sum+ ((double)capacity/wt[idx])*val[idx];
                break;
            }
        }
        return sum;
    }
};