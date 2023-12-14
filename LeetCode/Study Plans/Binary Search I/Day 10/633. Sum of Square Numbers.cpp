// Question 2

// Problem Link
// https://leetcode.com/problems/sum-of-square-numbers/

// Solution:
class Solution {
public:
    bool judgeSquareSum(int c) {
        long long st = 0, lt = sqrt(c);
        while(st <= lt) {
            long long sum = st*st + lt*lt;
            if(sum == c) return true;
            else if(sum < c) st++;
            else lt--;
        }
        return false;
    }
};