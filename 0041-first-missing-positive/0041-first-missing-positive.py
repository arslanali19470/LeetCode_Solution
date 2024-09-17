class Solution(object):
    def firstMissingPositive(self, nums):
        res=1
        nums.sort()
        for n in nums:
            if n==res:
                res+=1
        return res



 
        