class Solution(object):
    def trap(self, height):
        arraylen=len(height)
        leftArray=[0]*arraylen
        rightArray=[0]*arraylen
        ans=0

        leftArray[0]=height[0]
        for i in range(1,arraylen):
            newLeft=max(height[i],leftArray[i-1])
            leftArray[i]=newLeft
    # print(leftArray)

        rightArray[arraylen-1]=height[-1]
        for i in range(arraylen-2,-1,-1):
            newright=max(height[i],rightArray[i+1])
            rightArray[i]=newright
    # print(rightArray)
        for i in range(arraylen):
            ans+=min(rightArray[i],leftArray[i])-height[i]

        return ans




        
