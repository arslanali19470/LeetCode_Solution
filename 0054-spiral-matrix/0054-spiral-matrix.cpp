class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        int row=matrix.size();
        int col=matrix[0].size();
        vector<int> ans;
        int total=row*col;
        int count=0;

        int startRow=0;
        int startCol=0;
        int endRow=row-1;
        int endCol=col-1;

        while(count<total){
            // First Row:
            for(int i=startCol;i<=endCol && count<total ;i++){
                ans.push_back(matrix[startRow][i]);
                count++;
            }
            startRow++;

            // End Colum:
            for(int i =startRow;i<=endRow  && count<total ;i++){
                ans.push_back(matrix[i][endCol]);
                count++;    
            }
            endCol--;

            //End Row:
            for(int i=endCol; i>=startCol  && count<total ;i--){
                ans.push_back(matrix[endRow][i]);
                count++; 
            }
            endRow--;

            // First Col:
            for(int i=endRow;i>=startRow  && count<total ;i--){
                ans.push_back(matrix[i][startCol]);
                count++; 
            }
            startCol++;


        }
        return ans;
        
    }
};