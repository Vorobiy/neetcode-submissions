class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = 101;
        int profit = 0; 
        for(int i = 0; i < prices.size(); i++){
            if(minPrice > prices[i]){
                minPrice = prices[i];
            }
            if(prices[i] - minPrice > profit){
                profit = prices[i] - minPrice;
            }
        }
        return profit;
    }
};
