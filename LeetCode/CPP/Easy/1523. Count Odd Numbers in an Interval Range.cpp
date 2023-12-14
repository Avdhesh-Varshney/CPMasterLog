// Problem Link
// https://leetcode.com/problems/count-odd-numbers-in-an-interval-range/

// Solution:
class Solution {
public:
    int countOdds(int low, int high) {
        if(low%2 != 0)
            low -= 1;
        if(high%2 != 0)
            high += 1;
        return (high/2)-(low/2);
    }
};