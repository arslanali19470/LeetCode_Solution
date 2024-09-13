class Solution:
    def maxChunksToSorted(self, arr: List[int]) -> int:
        ans=0
        maxNum=0
        for i,num in enumerate(arr):
            maxNum=max(num,maxNum)
            if maxNum == i:
                ans+=1
         
        return ans
        
        