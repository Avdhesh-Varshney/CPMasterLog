// 23 Dec, 2024

class Solution {
    bool search(int& m, vector<int>& arr, int& x) {
        int l = 0, r = m-1;
        while(l <= r) {
            int mid = l + (r-l)/2;
            if(arr[mid] == x) return true;
            else if(arr[mid] > x) r = mid-1;
            else l = mid+1;
        }
        return false;
    }
  public:
    // Function to search a given number in row-column sorted matrix.
    bool searchRowMatrix(vector<vector<int>> &mat, int x) {
        // code here
        int n = mat.size(), m = mat[0].size();
        for(int i = 0; i < n; i++) if(search(m, mat[i], x)) return true;
        return false;
    }
};