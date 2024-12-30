class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int bestsell=prices[0];
        int MaxProfit=0;

        for(int i=1; i<prices.size(); i++){

            if(bestsell<prices[i]){

               MaxProfit=max(MaxProfit,prices[i]-bestsell); 
            }
            bestsell=min(bestsell,prices[i]);
        }
        return MaxProfit;
    }
};