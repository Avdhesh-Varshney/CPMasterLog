// Question 1

// Problem Link
// https://leetcode.com/problems/the-k-weakest-rows-in-a-matrix/

// Solution:
class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int n = mat.size();
        vector<int> sol(n), a(n), res(k);
        for(int i = 0; i < n; i++) {
            int cnt = 0;
            for(auto &j : mat[i]) if(j == 1) ++cnt;
            sol[i] = cnt;
        }
        a = sol;
        sort(a.begin(), a.end());
        for(int i = 0; i < k; i++) {
            auto it = find(sol.begin(), sol.end(), a[i]);
            res[i] = it-sol.begin();
            *it = -1;
        }
        return res;
    }
};