class Solution{
public:
    int sumDigit(int num,int sum){
        if(num == 0){
            if(sum < 10){
                return sum;
            }
            return sumDigit(sum,0);
        }


        int digit=num%10;
        sum=sum+digit;
        num=num/10;
        return sumDigit(num,sum);
    }
	int addDigits(int num){
		int sum=0;
        return sumDigit(num,sum);
	}
};