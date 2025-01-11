class Solution {
public:
    void nextPermutation(vector<int>& A) {
        int pivot=-1;
        int n=A.size();
        for(int i=n-2; i>=0;i--){
            if(A[i]<A[i+1]){
                pivot=i;
                break;
            }
        }
        if(pivot==-1){
            reverse(A.begin(),A.end());
            return;
        }

        for(int i=n-1;i>pivot;i--){
            if(A[pivot]<A[i]){
                swap(A[pivot],A[i]);
                break;
            }
        }

        reverse(A.begin()+pivot+1,A.end());
        
    }
};