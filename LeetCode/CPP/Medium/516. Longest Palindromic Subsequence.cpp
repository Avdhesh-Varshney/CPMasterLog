// Problem Link
// https://leetcode.com/problems/longest-palindromic-subsequence/

// Solution:
class Solution {
public:
    int lPS(string &s, int &n) {
        vector<vector<int>> dp(n, vector<int>(n, 0));
        for(int i = 0; i < n; i++) dp[i][i] = 1;
        for(int len = 2; len <= n; len++) {
            for(int i = 0; i < n-len+1; i++) {
                int j = i+len-1;
                if(s[i] == s[j]) dp[i][j] = dp[i+1][j-1] + 2;
                else dp[i][j] = max(dp[i+1][j], dp[i][j-1]);
            }
        }
        return dp[0][n-1];
    }
    int longestPalindromeSubseq(string s) {
        int n = s.length();
        return lPS(s, n);
    }
};