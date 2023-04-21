// Problem Link
// https://leetcode.com/problems/search-a-2d-matrix/

// Solution:

// Way :- 1
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

// Way :- 2
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size(), m = matrix[0].size(), id = 0;
        int st = 0, lt = n*m - 1, mid;
        while(st <= lt) {
            mid = (lt-st)/2 + st;
            if(matrix[mid/m][mid%m] == target) return true;
            else if(matrix[mid/m][mid%m] < target) st = mid + 1;
            else lt = mid - 1;
        }
        return false;
    }
};