class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        int TotalRow=matrix.size();
        int TotalCol=matrix[0].size();
  

        //Transpose of the matrix:
        for(int i=0; i<TotalRow;i++){
            for(int j=i;j<TotalCol;j++){
                int temp=matrix[i][j];
                matrix[i][j]=matrix[j][i];
                matrix[j][i]=temp;
            }
        }

        // Reverse The Rows:
        for(int i=0; i<TotalRow;i++){
            int start=0;
            int end=TotalCol-1;

            while(start<end){
            int temp=matrix[i][start];
            matrix[i][start]=matrix[i][end];
            matrix[i][end]=temp;
            start++;
            end--;
            }
        }



    }
};