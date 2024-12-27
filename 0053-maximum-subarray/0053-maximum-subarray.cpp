class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currentSum=0;
        int MaxSum=INT_MIN;
        for(int i:nums){
            currentSum+=i;
            MaxSum=max(MaxSum,currentSum);
            if(currentSum<0){
                currentSum=0;
            };

        }
        return MaxSum;
        
    }
};