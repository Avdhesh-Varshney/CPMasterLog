// Problem Link: https://leetcode.com/problems/count-servers-that-communicate/

// Solution:
class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size(), ans = 0;
        unordered_map<int, int> row, col;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(grid[i][j] == 1) {
                    row[j]++;
                    col[i]++;
                }
            }
        }
        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++)
                if(grid[i][j] && (row[j] > 1 || col[i] > 1))  ++ans;
        return ans;
    }
};