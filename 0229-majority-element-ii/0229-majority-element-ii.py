class Solution:
    def majorityElement(self, nums: List[int]) -> List[int]:
        MainObj={}
        res=[]
        for n in nums:
            if n in MainObj:
                MainObj[n]+=1
            else:
                MainObj[n]=1
            if MainObj[n]>len(nums)/3 and n not in res:
                res.append(n)
        return res
        