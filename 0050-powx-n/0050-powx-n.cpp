class Solution {
public:
    double myPow(double x, int n) {
        long BinaryNum=n;
        if (n<0){
            x=1/x;
            BinaryNum=-BinaryNum;
        }
        double ans=1; 
        


        while(BinaryNum>0){
            if(BinaryNum%2==1){
                ans*=x;
            }
            x*=x;
            BinaryNum/=2;
        }
        return ans;
    }
};