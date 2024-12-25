// 24 Dec, 2024

class Solution {
  public:
    // Function to search a given number in row-column sorted matrix.
    bool searchMatrix(vector<vector<int>> &mat, int x) {
        // code here
        int rows = mat.size(), cols = mat[0].size();
        int low = 0, high = rows-1;
        while(low <= high) {
            int mid = low + (high - low)/2;
            int midValue = mat[mid][cols-1];
            if(midValue == x) return true;
            else if(midValue < x) low = mid+1;
            else high = mid-1;
        }
        if(low >= rows) return false;
        int row = low;
        low = 0, high = cols-1;
        while(low <= high) {
            int mid = low + (high-low)/2;
            int midValue = mat[row][mid];
            if(midValue == x) return true;
            else if(midValue < x) low = mid+1;
            else high = mid-1;
        }
        return false;
    }
};