// Problem Link:
// https://leetcode.com/problems/spiral-matrix/

// Solution:
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int m = matrix.size(), n = matrix[0].size();
        int count = 0, row = 0, col = 0, rowE = m-1, colE = n-1, id;
        while(count < n*m) {
            // row const col incre
            if(count < n*m) {
                for(id = col; id <= colE; id++) {
                    ans.push_back(matrix[row][id]);
                    count++;
                }
            }
            row++;
            // row incre col const
            if(count < n*m) {
                for(id = row; id <= rowE; id++) {
                    ans.push_back(matrix[id][colE]);
                    count++;
                }
            }
            colE--;
            // row const col decre
            if(count < n*m) {
                for(id = colE; id >= col; id--) {
                    ans.push_back(matrix[rowE][id]);
                    count++;
                }
            }
            rowE--;
            // row decre col const
            if(count < n*m) {
                for(id = rowE; id >= row; id--) {
                    ans.push_back(matrix[id][col]);
                    count++;
                }
            }
            col++;
        }
        return ans;
    }
};