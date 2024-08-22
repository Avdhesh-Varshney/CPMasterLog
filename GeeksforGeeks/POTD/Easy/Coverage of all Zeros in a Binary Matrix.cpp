// 26 June 2024

class Solution {
  public:
    int findCoverage(vector<vector<int>>& matrix) {
        // Code here
        int ans = 0, n = matrix.size(), m = matrix[0].size();
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(matrix[i][j] == 0) {
                    if(i-1 >= 0 && matrix[i-1][j]) ++ans;
                    if(j-1 >= 0 && matrix[i][j-1]) ++ans;
                    if(i+1 < n && matrix[i+1][j]) ++ans;
                    if(j+1 < m && matrix[i][j+1]) ++ans;
                }
            }
        }
        return ans;
    }
};