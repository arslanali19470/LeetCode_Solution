class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        if (row == 0) return false;
        int col=matrix[0].size();
        int start=0;
        int end=(row*col)-1;
        int midpoint;

        while(start<=end){
            midpoint =start+(end-start)/2;
            int newNumber=matrix[midpoint/col][midpoint%col];
            if(target==newNumber){
                return true;
            }else if(target>newNumber){
                start=midpoint+1;
            }else{
                end=midpoint-1;
            }
            
        }
        return false;
        
    }
};