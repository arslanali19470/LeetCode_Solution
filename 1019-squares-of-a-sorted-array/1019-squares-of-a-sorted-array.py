class Solution(object):
    def sortedSquares(self, nums):
        nums=[x*x  for x in nums]
        nums.sort()
        return nums

        