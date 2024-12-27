// Problem Link:
// https://leetcode.com/problems/best-sightseeing-pair/description/

// Solution:
class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int ans = 0, n = values.size();
        int leftScore = values[0];
        for(int i = 1; i < n; i++) {
            ans = max(ans, leftScore + values[i]-i);
            leftScore = max(leftScore, values[i]+i);
        }
        return ans;
    }
};