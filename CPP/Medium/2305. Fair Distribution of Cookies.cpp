// Problem Link
// https://leetcode.com/problems/fair-distribution-of-cookies/

// Solution:
class Solution {
public:
    int ans = INT_MAX;
    void backtrack(vector<int>& c, int& k, vector<int>& v, int id) {
        if(id == c.size()) {
            int maxm = INT_MIN;
            for(int i = 0; i < k; i++) {
                maxm = max(maxm, v[i]);
            }
            ans = min(ans, maxm);
            return;
        }
        for(int i = 0; i < k; i++) {
            v[i] += c[id];
            backtrack(c, k, v, id+1);
            v[i] -= c[id];
        }
    }
    int distributeCookies(vector<int>& cookies, int k) {
        vector<int> v(k, 0);
        backtrack(cookies, k, v, 0);
        return ans;
    }
};