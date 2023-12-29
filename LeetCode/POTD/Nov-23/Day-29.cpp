// https://leetcode.com/problems/number-of-1-bits/description/?envType=daily-question&envId=2023-11-29

class Solution {
public:
    int hammingWeight(uint32_t n) {
        return bitset<32>(n).count();
    }
};