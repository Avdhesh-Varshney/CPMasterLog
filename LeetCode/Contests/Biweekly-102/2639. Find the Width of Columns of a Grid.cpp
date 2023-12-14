// Problem Link - https://leetcode.com/contest/biweekly-contest-102/problems/find-the-width-of-columns-of-a-grid/

class Solution {
public:
    vector<int> findColumnWidth(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        vector<int> ans(m, 0);
        for(int j = 0; j < m; j++) {
            for(int i = 0; i < n; i++) {
                string t = to_string(grid[i][j]);
                if(ans[j] < t.length()) ans[j] = t.length();
            }
        }
        return ans;
    }
};