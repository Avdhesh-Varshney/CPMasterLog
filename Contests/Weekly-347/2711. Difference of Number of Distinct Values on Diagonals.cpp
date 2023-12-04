// Problem Link - https://leetcode.com/contest/weekly-contest-347/problems/difference-of-number-of-distinct-values-on-diagonals/

class Solution {
public:
    int distictDownValues(vector<vector<int>>& grid, int r, int c, int& n, int& m) {
        set<int> s;
        while(r+1 < n && c+1 < m) {
            s.insert(grid[++r][++c]);
        }
        return s.size();
    }
    int distictTopValues(vector<vector<int>>& grid, int r, int c, int& n, int& m) {
        set<int> s;
        while(r-1 >= 0 && c-1 >= 0) {
            s.insert(grid[--r][--c]);
        }
        return s.size();
    }
    vector<vector<int>> differenceOfDistinctValues(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        vector<vector<int>> answer(n, vector<int>(m, 0));
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                answer[i][j] = abs(distictDownValues(grid, i, j, n, m) - distictTopValues(grid, i, j, n, m));
            }
        }
        return answer;
    }
};