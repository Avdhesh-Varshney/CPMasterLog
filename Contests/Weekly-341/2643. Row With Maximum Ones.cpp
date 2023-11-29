// Problem Link - https://leetcode.com/contest/weekly-contest-341/problems/row-with-maximum-ones/

class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int n = mat.size(), m = mat[0].size();
        int cnt = 0, id = 0;
        for(int i = 0; i < n; i++) {
            int t = 0;
            for(int j = 0; j < m; j++) {
                if(mat[i][j] == 1) t++;
            }
            if(t > cnt) {
                cnt = t;
                id = i;
            }
        }
        return {id, cnt};
    }
};