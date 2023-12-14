// Problem Link
// https://leetcode.com/problems/count-of-matches-in-tournament/

// Solution:
class Solution {
public:
    int numberOfMatches(int n) {
        int matches = 0, ans = 0;
        while(n > 1) {
            matches = n/2;
            n = n - matches;
            ans += matches;
        }
        return ans;
    }
};