// https://leetcode.com/problems/special-positions-in-a-binary-matrix/description/?envType=daily-question&envId=2023-12-13

class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int m = mat.size(), n = mat[0].size(), ans = 0;
        vector<int> row(m, 0), col(n, 0);
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                row[i] += mat[i][j];
                col[j] += mat[i][j];
            }
        }
        for(int i = 0; i < m; i++)
            for(int j = 0; row[i] == 1 && j < n; j++)
                if(mat[i][j] && col[j] == 1) ++ans;
        return ans;
    }
};