// Problem Link
// https://leetcode.com/problems/determine-whether-matrix-can-be-obtained-by-rotation/

// Solution:
class Solution {
public:
    bool check(vector<vector<int>>& mat, vector<vector<int>>& target) {
        for(int i = 0; i < target.size(); i++) {
            for(int j = 0; j < target.size(); j++) {
                if(mat[i][j] != target[i][j])
                    return false;
            }
        }
        return true;
    }
    void rotate(vector<vector<int>>& mat) {
        int n = mat.size();
        for(int i = 0; i < n/2; i++) {
            for(int j = i; j < n-i-1; j++) {
                int temp = mat[i][j];
                mat[i][j] = mat[j][n-i-1];
                mat[j][n-i-1] = mat[n-i-1][n-j-1];
                mat[n-i-1][n-j-1] = mat[n-j-1][i];
                mat[n-j-1][i] = temp;
            }
        }
    }
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        bool result = check(mat, target);
        int rot = 1;
        while(!result and rot <= 4) {
            rotate(mat);
            rot++;
            result = check(mat, target);
        }
        return result;
    }
};