// Problem Link:
// https://leetcode.com/problems/minimum-bit-flips-to-convert-number/

// Solution:
// Method: 1
class Solution {
public:
    int counting(int n) {
        int count = 0;
        while(n > 0) {
            count++;
            n = n&(n-1);
        }
        return count;
    }
    int minBitFlips(int start, int goal) {
        return counting(start ^ goal);
    }
};

// Method: 2
class Solution {
public:
    int minBitFlips(int start, int goal) {
        bitset<64> ans(start ^ goal);
        return ans.count();
    }
};

// Method: 3
class Solution {
public:
    int minBitFlips(int start, int goal) {
        bitset<64> s(start), g(goal);
        int ans = 0;
        for(int i = 0; i < 64; i++) ans += (s[i] != g[i]);
        return ans;
    }
};