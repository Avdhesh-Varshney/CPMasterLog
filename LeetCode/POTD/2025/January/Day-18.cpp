// Problem Link: https://leetcode.com/problems/minimum-cost-to-make-at-least-one-valid-path-in-a-grid/

// Solution:
class Solution {
    const vector<vector<int>> dirs = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
    void dfs(vector<vector<int>>& grid, int n, int m, vector<vector<int>>& minCost, int cost, queue<pair<int, int>>& q) {
        if(!isUnvisited(minCost, n, m)) return;
        minCost[n][m] = cost;
        q.push({n, m});
        int nextDir = grid[n][m] - 1;
        dfs(grid, n+dirs[nextDir][0], m+dirs[nextDir][1], minCost, cost, q);
    }
    bool isUnvisited(vector<vector<int>>& minCost, int n, int m) {
        return n >= 0 && m >= 0 && n < minCost.size() && m < minCost[0].size() && minCost[n][m] == INT_MAX;
    }
public:
    int minCost(vector<vector<int>>& grid) {
        int cost = 0, n = grid.size(), m = grid[0].size();
        vector<vector<int>> minCost(n, vector<int>(m, INT_MAX));
        queue<pair<int, int>> q;
        dfs(grid, 0, 0, minCost, cost, q);
        while(!q.empty()) {
            ++cost;
            int level = q.size();
            while(level-- > 0) {
                auto [row, col] = q.front(); q.pop();
                for(int dir = 0; dir < 4; dir++)
                    dfs(grid, row+dirs[dir][0], col+dirs[dir][1], minCost, cost, q);
            }
        }
        return minCost[n-1][m-1];
    }
};