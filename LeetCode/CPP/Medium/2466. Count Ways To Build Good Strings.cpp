// Problem Link:
// https://leetcode.com/problems/count-ways-to-build-good-strings/

// Solution:
class Solution {
    long long mod = 1000000007;
    int solve(int& l, int& h, int& z, int& o, int len, vector<int>& dp) {
        if(len > h) return 0;
        if(dp[len] != -1) return dp[len];
        int ans = (len >= l && len <= h)? 1: 0;
        ans = (ans + solve(l, h, z, o, len+z, dp)%mod)%mod;
        return dp[len] = (ans + solve(l, h, z, o, len+o, dp)%mod)%mod;
    }
public:
    int countGoodStrings(int low, int high, int zero, int one) {
        vector<int> dp(high+1, -1);
        return solve(low, high, zero, one, 0, dp);
    }
};