// Problem Link
// https://leetcode.com/problems/matrix-diagonal-sum/

// Solution:
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size(), sum = 0;
        if(n%2 != 0) {
            for(int i = 0; i < n; i++) {
                for(int j = 0; j < n; j++) {
                    if(i == j)
                        sum += mat[i][j];
                    if(i == n-j-1 and i != j)
                        sum += mat[i][j];
                }
            }
        }
        else {
            for(int i = 0; i < n; i++) {
                for(int j = 0; j < n; j++) {
                    if(i == j)
                        sum += mat[i][j];
                    if(i == n-j-1)
                        sum += mat[i][j];
                }
            }
        }
        return sum;
    }
};