// https://leetcode.com/problems/minimum-one-bit-operations-to-make-integers-zero/description/?envType=daily-question&envId=2023-11-30

class Solution {
public:
    int minimumOneBitOperations(int n) {
        int i;
        for(i = 0; n > 0; n &= n-1) i = -(i + (n ^ (n-1)));
        return abs(i);
    }
};