// Question 2

// Problem Link
// https://leetcode.com/problems/search-a-2d-matrix/

// Solution:
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size(), m = matrix[0].size(), id = 0;
        for(int i = 0; i < matrix.size(); i++) {
            if(matrix[i][0] == target || matrix[i][m-1] == target)
                return true;
            else if(matrix[i][m-1] > target) {
                id = i;
                break;
            }
        }
        if(matrix[id][0] > target)
            return false;
        for(int j = 0; j < m; j++)
            if(matrix[id][j] == target)
                return true;
        return false;
    }
};