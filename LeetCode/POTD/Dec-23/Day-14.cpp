// https://leetcode.com/problems/difference-between-ones-and-zeros-in-row-and-column/description/?envType=daily-question&envId=2023-12-14

class Solution {
public:
    pair<int, int> s(int& m, int& n, vector<vector<int>>& grid, int x, int y) {
        pair<int, int> res = {0, 0};
        if(x != -1) {
            for(int i = 0; i < n; i++) {
                if(grid[x][i]) res.second++;
                else res.first++;
            }
        } else {
            for(int i = 0; i < m; i++) {
                if(grid[i][y]) res.second++;
                else res.first++;
            }
        }
        return res;
    }
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        vector<vector<int>> diff(m, vector<int>(n, 0));
        vector<int> onesRow(m, 0), zerosRow(m, 0), onesCol(n, 0), zerosCol(n, 0);
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(zerosRow[i] <= 0 && onesRow[i] <= 0) {
                    auto res = s(m, n, grid, i, -1);
                    zerosRow[i] = res.first;
                    onesRow[i] = res.second;
                }
                if(zerosCol[j] <= 0 && onesCol[j] <= 0) {
                    auto res = s(m, n, grid, -1, j);
                    zerosCol[j] = res.first;
                    onesCol[j] = res.second;
                }
                diff[i][j] = onesRow[i] + onesCol[j] - zerosRow[i] - zerosCol[j];
            }
        }
        return diff;
    }
};