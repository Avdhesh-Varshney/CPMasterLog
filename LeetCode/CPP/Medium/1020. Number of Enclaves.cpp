// Problem Link
// https://leetcode.com/problems/number-of-enclaves/

// Solution:
class Solution {
public:
    void dfs(vector<vector<int>>& grid, int n, int m, int i, int j) {
        if(i >= n || j >= m || i < 0 || j < 0 || grid[i][j] == 0) return;
        grid[i][j] = 0;
        dfs(grid, n, m, i+1, j);
        dfs(grid, n, m, i-1, j);
        dfs(grid, n, m, i, j+1);
        dfs(grid, n, m, i, j-1);
    }
    int numEnclaves(vector<vector<int>>& grid) {
        int ans = 0, n = grid.size(), m = grid[0].size();
        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++)
                if(i*j == 0 || i == n-1 || j == m-1)
                    if(grid[i][j] == 1)
                        dfs(grid, n, m, i, j);
        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++)
                if(grid[i][j] == 1) ans++;
        return ans;
    }
};