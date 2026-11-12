class Solution {
public:
    // T.C O(N)
    bool lemonadeChange(vector<int>& bills) {
        int n=bills.size();
        int five=0;
        int ten=0;

        for(int i=0; i<n; i++){
            if(bills[i] == 5){
                five++;
            }
            else if(bills[i] == 10){
                if(five == 0){
                    return false;
                }
                five--;
                ten++;
            }
            else if(bills[i] == 20){
                // Prefer giving one 10 and one 5
                if(five > 0 && ten > 0){
                    five--;
                    ten--;
                }
                // Otherwise, give three 5 bills
                else if( five >=3){
                    five=five-3;
                }
                else{
                    return false;
                }
            }
        }  
        return true;
    }
};