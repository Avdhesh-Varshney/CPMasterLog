// Problem Link - https://leetcode.com/contest/weekly-contest-370/problems/find-champion-i/

class Solution {
public:
    int findChampion(vector<vector<int>>& grid) {
        int n = grid.size(), cnt = 0, ans = 0;
        for(int i = 0; i < n; i++) {
            int temp = accumulate(grid[i].begin(), grid[i].end(), 0);
            if(cnt < temp) {
                cnt = temp;
                ans = i;
            }
        }
        return ans;
    }
};