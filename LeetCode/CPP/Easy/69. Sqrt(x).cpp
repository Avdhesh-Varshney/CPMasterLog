// Problem Link
// https://leetcode.com/problems/sqrtx/

// Solution:
class Solution {
public:
    int mySqrt(int x) {
        if(x == 0) return 0;
        int st = 0, lt = x, mid;
        while(st < lt) {
            mid = (lt-st)/2 + st;
            if(mid*1LL*mid == x) return mid;
            else if(mid*1LL*mid > x) lt = mid-1;
            else st = mid+1;
        }
        if((mid-1)*1LL*(mid-1) > x) return mid-2;
        if((mid)*1LL*(mid) > x) return mid-1;
        if((mid+1)*1LL*(mid+1) > x) return mid;
        return mid+1;
    }
};