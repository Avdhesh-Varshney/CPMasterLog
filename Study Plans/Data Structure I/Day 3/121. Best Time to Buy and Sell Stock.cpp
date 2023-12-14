// Problem Link
// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

// Solution:
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = INT_MAX, sell = INT_MIN, profit = 0;
        for(int i = 0; i < prices.size(); i++) {
            if(buy > prices[i]) {
                buy = prices[i];
                sell = buy;
            }
            if(sell < prices[i])
                sell = prices[i];
            profit = max(profit, sell-buy);
        }
        return profit;
    }
};