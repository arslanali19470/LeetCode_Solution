class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int row=matrix.size();
        int col=matrix[0].size();
        int stCol=0,endCol=col-1,stRow=0,endRow=row-1;

        while( stRow<=endRow && stCol<=endCol ){
            for(int j=stCol; j<=endCol; j++){
                ans.push_back(matrix[stRow][j]);
            }

            for(int i=stRow+1; i<=endRow; i++){
                ans.push_back(matrix[i][endCol]);
            }

            for(int j=endCol-1; j>=stCol; j--){
              
                   if(stRow==endRow){
                    break;
                }
                ans.push_back(matrix[endRow][j]);
            }


            for(int i=endRow-1; i>=stRow+1; i--){
                  if(stCol==endCol){
                    break;
                }
                ans.push_back(matrix[i][stCol]);
            }
            stCol++;endCol--;
            stRow++;endRow--;
        }
        return ans;
    }
};


