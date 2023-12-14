// Problem Link:
// https://leetcode.com/problems/power-of-two/

// Solution:
class Solution {
public:
    bool isPowerOfTwo(int n) {
        long long int num = 1;
        while(num < n)
            num *= 2;
        if(num == n)
            return true;
        else
            return false;
    }
};