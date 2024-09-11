class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        MainObj={}
        
        for n in nums:
            if n in MainObj:
                MainObj[n]+=1
            else:
                MainObj[n]=1
            if MainObj[n]>len(nums)//2:
                return n
                


            
                
            
           

