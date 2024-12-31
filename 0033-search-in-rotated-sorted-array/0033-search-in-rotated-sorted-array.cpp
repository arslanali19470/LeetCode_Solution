class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int start=0, end=nums.size()-1;
        

        while(start<=end){
            int MidPoint=start+(end-start)/2;
            if(nums[MidPoint]==target){
                return MidPoint;
            }

            if(nums[start]<=nums[MidPoint]){
                if(target>=nums[start] && target<=nums[MidPoint]){
                    end=MidPoint-1;
                }else{
                    start=MidPoint+1;
                }

            }else{
                 if(target>=nums[MidPoint] && target<=nums[end]){
                    // end=MidPoint-1;
                     start=MidPoint+1;
                }else{
                    // start=MidPoint+1;
                    end=MidPoint-1;
                }

            }
           
        }
        return -1;
    }
};