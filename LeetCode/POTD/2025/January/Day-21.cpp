// Problem Link: https://leetcode.com/problems/grid-game/

// Solution:
class Solution {
public:
    long long gridGame(vector<vector<int>>& grid) {
        long long ans = LONG_LONG_MAX;
        long long row1 = accumulate(begin(grid[0]), end(grid[0]), 0LL), row2 = 0;
        int n = grid.size(), m = grid[0].size();
        for(int i = 0; i < m; i++) {
            row1 -= grid[0][i];
            ans = min(ans, max(row1, row2));
            row2 += grid[1][i];
        }
        return ans;
    }
};