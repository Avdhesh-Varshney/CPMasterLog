// 21 Dec, 2024

class Solution {
  public:
    // Function to rotate matrix anticlockwise by 90 degrees.
    void rotateby90(vector<vector<int>>& mat) {
        // code here
        int n = mat.size();
        for(int i = 0; i < n; i++) {
            int j = 0, k = n-1;
            while(j < k) {
                swap(mat[i][j], mat[i][k]);
                ++j; --k;
            }
        }
        for(int i = 0; i < n; i++)
            for(int j = i; j < n; j++) swap(mat[i][j], mat[j][i]);
    }
};