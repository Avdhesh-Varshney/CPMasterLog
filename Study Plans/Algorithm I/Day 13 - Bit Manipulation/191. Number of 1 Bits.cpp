// Question 2

// Problem Link:
// https://leetcode.com/problems/number-of-1-bits/

// Solution:
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        while(n) {
            count += n&1;
            n >>= 1;
        }
        return count;
    }
};