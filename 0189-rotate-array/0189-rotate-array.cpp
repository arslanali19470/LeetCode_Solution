class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> Temp (nums.size());
        for(int i=0; i<nums.size();i++){
            Temp[(i+k)%nums.size()]=nums[i];
        }
        nums=Temp;
    }
};