// Problem Link:
// https://leetcode.com/problems/minimum-bit-flips-to-convert-number/

// Solution:
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