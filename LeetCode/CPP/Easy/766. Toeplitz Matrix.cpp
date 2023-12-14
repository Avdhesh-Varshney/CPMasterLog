// Problem Link
// https://leetcode.com/problems/toeplitz-matrix/

// Solution:
class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int row = matrix.size(), col = matrix[0].size(), i = 0, j = 0, k = 0;
        while(k < col) {
            i = 0, j = k;
            while(i < row-1 and j < col-1) {
                if(matrix[i][j] != matrix[i+1][j+1])
                    return false;
                i++;
                j++;
            }
            k++;
        }
        k = 1;
        while(k < row) {
            i = k, j = 0;
            while(i < row-1 and j < col-1) {
                if(matrix[i][j] != matrix[i+1][j+1])
                    return false;
                i++;
                j++;
            }
            k++;
        }
        return true;
    }
};