class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        currentSum=0
        AnsSuum=-inf
        for num in nums:
            currentSum=max(currentSum+num,num)
            AnsSuum=max(AnsSuum,currentSum)
        return AnsSuum
        