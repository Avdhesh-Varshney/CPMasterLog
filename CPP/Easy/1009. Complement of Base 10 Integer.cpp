// Problem Link
// https://leetcode.com/problems/complement-of-base-10-integer/

// Solution:
class Solution {
public:
    int bitwiseComplement(int n) {
        if(n == 0) return 1;
        int i = 0;
        for(; i < n; i++)
            if(pow(2, i) > n) break;
        return pow(2, i) - n - 1;
    }
};