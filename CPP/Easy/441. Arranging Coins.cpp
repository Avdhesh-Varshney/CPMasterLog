// Problem Link
// https://leetcode.com/problems/arranging-coins/

// Solution:
class Solution {
public:
    int arrangeCoins(int n) {
        int stair = 0, coin = 1;
        while(n >= coin) {
            stair++;
            n -= coin;
            coin++;
        }
        return stair;
    }
};