// Problem Link:
// https://leetcode.com/problems/unique-paths/

// Solution:
#define type int
class Solution {
public:
    int solve(int& m, int& n, int x, int y, vector<vector<type>>& dp) {
        if(x == m-1 && y == n-1) return 1;
        if(x >= m || y >= n) return 0;
        if(dp[x][y] != -1) return dp[x][y]; // Memoization
        int up = solve(m, n, x+1, y, dp);
        int left = solve(m, n, x, y+1, dp);
        dp[x][y] = up + left; // Memoization
        return up+left;
    }
    int uniquePaths(int m, int n) {
        vector<vector<type>> dp(m, vector<type>(n, -1));
        return solve(m, n, 0, 0, dp);
    }
};