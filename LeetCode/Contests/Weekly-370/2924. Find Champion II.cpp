// Problem Link - https://leetcode.com/contest/weekly-contest-370/problems/find-champion-ii/

class Solution {
public:
    int findChampion(int& n, vector<vector<int>>& edges) {
        int sz = edges.size();
        if(n == 1) return 0;
        else if(sz == 0) return -1;
        vector<bool> v(n, false);
        for(auto &i : edges) {
            v[i[1]] = true;
        }
        int cnt = 0, ans = 0;
        for(int i = 0; i < n; i++) {
            if(!v[i]) {
                ++cnt;
                ans = i;
            }
        }
        return cnt == 1? ans : -1;
    }
};