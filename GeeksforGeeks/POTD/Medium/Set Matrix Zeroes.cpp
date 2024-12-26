// 25 Dec, 2024

class Solution {
  public:
    void setMatrixZeroes(vector<vector<int>> &mat) {
        // code here
        unordered_map<int, bool> rows, cols;
        int n = mat.size(), m = mat[0].size();
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(!mat[i][j]) {
                    rows[i] = true;
                    cols[j] = true;
                }
            }
        }
        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++) if(rows[i] || cols[j]) mat[i][j] = 0;
    }
};