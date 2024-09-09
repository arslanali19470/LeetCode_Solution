class Solution(object):
    def rotate(self, nums, k):
        k = k % len(nums)
        listOne=nums[-k:]
        listTwo=nums[:-k]
        nums[:]=listOne+listTwo
      
 
        