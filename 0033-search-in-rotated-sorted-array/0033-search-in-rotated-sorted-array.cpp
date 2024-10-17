class Solution {
    int pivotPoint(vector<int>& nums){
        int start=0,end=nums.size()-1;
        int midPoint=start+(end-start)/2;
        while(start<end){
            if(nums[midPoint]>=nums[0]){
                start=midPoint+1;
            }else{
                end=midPoint;
            }
            midPoint=start+(end-start)/2;
        }
        return start;
    }
    int getBinarySearch(vector<int>& nums,int s,int e,int target ){
        int start=s,end=e;
        int midPoint=start+(end-start)/2;
        while(start<=end){
            if (target==nums[midPoint]){
                return midPoint;
            }else if(target>nums[midPoint]){
                start=midPoint+1;
            }else{
                end=midPoint-1;
            }   
            midPoint = start + (end - start) / 2;
        }
        return -1;
       
    }
public:
    int search(vector<int>& nums, int target) {

        int Pivot=pivotPoint(nums);
        //     if (nums[Pivot] == target) {
        //     return Pivot;
        //  }
        if (nums[Pivot]<=target && target<=nums[nums.size()-1]){
            return getBinarySearch(nums,Pivot,nums.size()-1,target);
        }else{
            return getBinarySearch(nums,0,Pivot-1,target);
        }
        
    }
};