class Solution(object):
    def firstMissingPositive(self, nums):
        Numone=False
        n=len(nums)
        for ind in range(n):
            if nums[ind]==1:
                Numone=True
            if nums[ind]<1 or n<nums[ind]:
                nums[ind]=1
        if not Numone:
            return 1

        for ind in range(n):
            index=abs(nums[ind])
            nums[index-1]=-abs(nums[index-1])
        for ind in range(n):
            if nums[ind]>0:
                return ind+1
        return n+1


 
        