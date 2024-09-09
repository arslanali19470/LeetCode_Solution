class Solution(object):
    def sortedSquares(self, nums):
        nums=[abs(i) for i in nums]
        nums.sort()
        nums=[x*x  for x in nums]
        return nums

        