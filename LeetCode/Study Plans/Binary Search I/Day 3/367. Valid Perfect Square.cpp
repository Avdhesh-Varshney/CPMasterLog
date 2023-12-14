// Question 1

// Problem Link
// https://leetcode.com/problems/valid-perfect-square/

// Solution:
class Solution {
public:
    bool isPerfectSquare(int num) {
        int st = 1, lt = num;
        while(st <= lt) {
            int mid = (lt-st)/2 + st;
            if(mid*1LL*mid == num) return true;
            else if(mid*1LL*mid > num) lt = mid-1;
            else if(mid*1LL*mid < num) st = mid+1;
        }
        return false;
    }
};