// Problem Link
// https://leetcode.com/problems/maximum-number-of-achievable-transfer-requests/

// Solution:
class Solution {
public:
    int ans = 0;
    void recur(int i, vector<vector<int>>& v, int l, vector<int>& temp) {
        if(v.size() == i) {
            for(auto &i : temp) if(i != 0) return;
            ans = max(ans, l);
            return;
        }
        recur(i+1, v, l, temp);
        temp[v[i][0]]--;
        temp[v[i][1]]++;
        recur(i+1, v, l+1, temp);
        temp[v[i][0]]++;
        temp[v[i][1]]--;
    }
    int maximumRequests(int n, vector<vector<int>>& requests) {
        vector<int> temp(n, 0);
        recur(0, requests, 0, temp);
        return ans;
    }
};