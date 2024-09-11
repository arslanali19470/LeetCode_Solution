class Solution:
    def maxProduct(self, nums: List[int]) -> int:
        
        curMin,curMax=1,1
        res=nums[0]
        for n in nums:
            vals=(n,curMin*n,curMax*n)
        
            curMax,curMin=max(vals),min(vals)
            res=max(res,curMax)
        return res



            

        