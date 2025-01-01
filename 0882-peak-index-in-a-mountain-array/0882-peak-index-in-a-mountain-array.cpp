class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int start=1,end=arr.size()-2;
        while(start<=end){
            int Mid=start+(end-start)/2;
            if(arr[Mid-1]<arr[Mid] && arr[Mid]>arr[Mid+1]){
                return Mid;    
            }else if(arr[Mid-1]<arr[Mid]){
                start=Mid+1;
            }else{
                end=Mid-1;
            }
        }
     return -1;
    }
};