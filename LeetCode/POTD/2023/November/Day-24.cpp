// https://leetcode.com/problems/maximum-number-of-coins-you-can-get/description/?envType=daily-question&envId=2023-11-24

class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(), piles.end(), greater<int>());
        int n = piles.size(), i = 1, ans = 0;
        while(i <= (2*n)/3) {
            ans += piles[i];
            i += 2;
        }
        return ans;
    }
};