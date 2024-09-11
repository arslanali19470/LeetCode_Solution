class Solution:
    def maxProduct(self, nums: List[int]) -> int:
        res=max(nums)
        curMin,curMax=1,1
        for n in nums:
            if n==0:
                curMin,curMax=1,1
                continue
            temp=curMax*n    
            curMax=max(n,n*curMax,n*curMin)
            curMin=min(n,temp,n*curMin)
            res=max(curMax,res)
        return res
            

        