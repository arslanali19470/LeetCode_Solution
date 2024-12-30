class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0;
        int right =height.size()-1;
        long MaxWater=0;

        while(left<right){
            int width=right-left;
            int length=min(height[left],height[right]);
            long Water=width*length;
            MaxWater=max(MaxWater,Water);

            (height[left]<height[right]) ? left++:right--;
              
        }
        return MaxWater;
        
    }
};