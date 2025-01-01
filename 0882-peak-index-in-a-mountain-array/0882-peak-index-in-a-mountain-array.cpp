class Solution {
        int PeakIdx(vector<int>& arr){
        int start=0,end=arr.size()-1;
        int ans=-1;
        int midPoint=start+((end-start)/2);
        while (start<=end)
        {
            if(arr[midPoint]<arr[midPoint+1]){
                start=midPoint+1;
            }else if(arr[midPoint-1]<arr[midPoint]>arr[midPoint+1]){
                return midPoint;
            }else{
                end=midPoint-1;
            }
            midPoint=start+((end-start)/2);
        }
        return midPoint;
    }
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int ans=PeakIdx(arr);
        return ans;
        
    }
};