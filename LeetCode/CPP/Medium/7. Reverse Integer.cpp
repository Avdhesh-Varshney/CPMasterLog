// Problem Link
// https://leetcode.com/problems/reverse-integer/

// Solution:
class Solution {
public:
    int doReverse(int x) {
        int num = 0;
        while(x > 0) {
            if(num > INT_MAX/10) return 0;
            num = num*10 + x%10;
            x /= 10;
        }
        return num;
    }
    int reverse(int x) {
        return x > 0 ? doReverse(x) : -1*doReverse(abs(x));
    }
};