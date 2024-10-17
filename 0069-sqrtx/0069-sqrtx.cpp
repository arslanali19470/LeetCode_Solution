class Solution {
    int FindSquare(int x){

        
        int start=0,end=x;
        int midPoint=start+(end-start)/2;
        int ans=-1;
        while(start<=end){
            long long int square=(long long)midPoint*midPoint;
            if(square==x){
                return midPoint;
            }else if(square>x){
                end=midPoint-1;
            }else{
                ans=midPoint;
                start=midPoint+1;
            }
            midPoint=start+(end-start)/2;
            
        }
        return ans;
    }
public:
    int mySqrt(int x) {
        if(x==0){
            return 0;
        }
        if (x<0){
            return -1;
        }
        return FindSquare(x);
        
    }
};