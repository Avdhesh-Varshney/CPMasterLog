// Problem Link: https://leetcode.com/problems/minimum-number-of-operations-to-move-all-balls-to-each-box/

// Solution:
class Solution {
    int fillBalls(int& x, vector<int>& balls) {
        int ans = 0;
        for(auto &i : balls) ans += abs(x-i);
        return ans;
    }
public:
    vector<int> minOperations(string boxes) {
        int n = boxes.length();
        vector<int> ans(n, 0), id;
        for(int i = 0; i < n; i++) if(boxes[i] == '1') id.emplace_back(i);
        for(int i = 0; i < n; i++) ans[i] = fillBalls(i, id);
        return ans;
    }
};