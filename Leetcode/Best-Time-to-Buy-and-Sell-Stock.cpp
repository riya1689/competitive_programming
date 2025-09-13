class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0;
        int buy_with_min_price = INT_MAX;
        for(int i=0; i<prices.size();i++){
            buy_with_min_price = min(buy_with_min_price , prices[i]);
            // profit = prices[i] - buy_with_min_price
            max_profit = max(max_profit, prices[i] - buy_with_min_price);
        }
        return max_profit;
        
    }
};