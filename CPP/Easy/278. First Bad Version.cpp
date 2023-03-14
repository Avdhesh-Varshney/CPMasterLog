// Problem Link
// https://leetcode.com/problems/first-bad-version/

// Solution:
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int st = 1, lt = n, mid = (lt-st)/2 + st;
        while(st < lt) {
            if(isBadVersion(mid))
                lt = mid;
            else
                st = mid+1;
            mid = (lt-st)/2 + st;
        }
        return st;
    }
};