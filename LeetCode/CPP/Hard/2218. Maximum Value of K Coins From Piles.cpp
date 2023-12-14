// Problem Link
// https://leetcode.com/problems/maximum-value-of-k-coins-from-piles/

// Solution:
class Solution {
public:
    int maxValueOfCoins(vector<vector<int>>& piles, int k) {
        vector<int> v(k+1, 0), pileSum(k+1, 0);
        for(auto &pile : piles) {
            int n = min(k, (int)pile.size());
            for(int i = 1; i <= n; i++) pileSum[i] = pileSum[i-1] + pile[i-1];
            for(int i = k; i > 0; i--) {
                int large = 0;
                for(int j = min(i, n); j >= 0; j--) large = max(large, pileSum[j] + v[i-j]);
                v[i] = large;
            }
        }
        return v[k];
    }
};