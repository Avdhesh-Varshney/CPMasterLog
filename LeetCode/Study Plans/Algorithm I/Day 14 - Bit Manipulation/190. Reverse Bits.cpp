// Question 1

// Problem Link
// https://leetcode.com/problems/reverse-bits/?envType=study-plan&envId=algorithm-i&plan=algorithm

// Solution:
class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        if(n == 0) return 0;
        int res = 0, i = 0;
        while(n) {
            res <<= 1;
            if((n&1) == 1) res++;
            n >>= 1;
            ++i;
        }
        while(i < 32) {
            res = res << 1;
            ++i;
        }
        return res;
    }
};