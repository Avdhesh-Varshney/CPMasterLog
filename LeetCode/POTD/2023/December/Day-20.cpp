// https://leetcode.com/problems/buy-two-chocolates/description/?envType=daily-question&envId=2023-12-20

class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        nth_element(prices.begin(), prices.begin()+1, prices.end());
        int left = money - prices[0] - prices[1];
        return (left >= 0) ? left : money;
    }
};