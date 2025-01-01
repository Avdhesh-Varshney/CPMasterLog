// Problem Link: 1422. Maximum Score After Splitting a String
// https://leetcode.com/problems/maximum-score-after-splitting-a-string/

// Solution:
class Solution {
public:
    int maxScore(string s) {
        int ans = 0, oneCnt = 0;
        // Count all the 1's in the string.
        for(auto &i : s) if(i == '1') ++oneCnt;
        // Start counting of 0's from left and deleting all 1's from left.
        int zeroCnt = (s[0] == '0'); oneCnt -= (s[0] == '1');
        ans = max(ans, zeroCnt+oneCnt); // First ans checking*
        // Splitting the array from [1, n-1] index only.
        for(int i = 1; i < s.length()-1; i++) {
            if(s[i] == '0') ++zeroCnt;
            else --oneCnt;
            ans = max(ans, zeroCnt+oneCnt);
        }
        return ans;
    }
};