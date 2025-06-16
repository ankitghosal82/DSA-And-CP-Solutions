

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.empty()) return 0;

        int min_price = INT_MAX;
        int max_profit = 0;

        for (int price : prices) {
            // Update the minimum price if the current price is lower
            if (price < min_price) {
                min_price = price;
            } 
            // Calculate the profit if selling at the current price
            int profit = price - min_price;
            // Update the maximum profit if the current profit is higher
            if (profit > max_profit) {
                max_profit = profit;
            }
        }

        return max_profit;
    }
};
