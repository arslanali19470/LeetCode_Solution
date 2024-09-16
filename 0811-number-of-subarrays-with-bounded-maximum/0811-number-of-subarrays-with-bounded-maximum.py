class Solution(object):
    def numSubarrayBoundedMax(self, nums, left, right):
        res=0
        si, ei =0,0
        preC=0
        while (ei < len(nums)):
            if left<=nums[ei] and nums[ei] <=right:
                preC=(ei-si)+1
                res+=preC
            elif(nums[ei]<left):
                res+=preC
            else:
                si=ei+1
                preC=0
            ei+=1
        return res


                
   
        