class Solution(object):
    def removeDuplicates(self, nums):
        count=1
        for fast in range(1,len(nums)):
            if count==1 or nums[fast] != nums[count-2]:
                nums[count]=nums[fast]
                count+=1
        return count



        