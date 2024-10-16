class Solution {
    int FindFirstInd(vector<int>&nums ,int target){
    int start=0, end=nums.size()-1;
    int midVal = start+(end-start)/2;
    int ans=-1;

    while (start<=end)
    {
       if(target==nums[midVal]){
        ans= midVal;
        end=midVal-1;

    }else if(target>nums[midVal]){
        start=midVal+1;
    }else{
        end=midVal-1;
    }
    midVal = start+(end-start)/2;
    }
    return ans;
}
int FindLastInd(vector<int>&nums, int target){
    int start=0, end=nums.size()-1;
    int midVal = start+(end-start)/2;
    int ans=-1;

    while (start<=end)
    {
       if(target==nums[midVal]){
        ans= midVal;
        start=midVal+1;
        //  end=midVal-1;

    }else if(target>nums[midVal]){
        start=midVal+1;
    }else{
        end=midVal-1;
    }
    midVal = start+(end-start)/2;
    }
    return ans;
}

public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        vector<int> result(2);
        result[0]=FindFirstInd(nums,target);
        result[1]=FindLastInd(nums,target);
        return result;
    }
};