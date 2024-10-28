class Solution {
public:
    bool check(vector<int>& nums) {
        int s=nums.size();
        int cont=0;
        for (int i=1; i<s; i++){
            if(nums[i-1]>nums[i]){
                cont++;
            }

        }
        if(nums[0]<nums[s-1]){
            cont++;
            }
        if (cont<=1){
            return true;
        }else{
            return false;
        }
    }
};