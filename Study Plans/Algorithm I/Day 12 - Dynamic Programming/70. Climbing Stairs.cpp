// Question 1

// Problem Link
// https://leetcode.com/problems/climbing-stairs/?envType=study-plan&envId=algorithm-i&plan=algorithm

// Solution:
class Solution {
public:
    int climbStairs(int n) {
        if(n <= 0) return 0;
        if(n == 1 || n == 2) return n;
        int slow = 2, fast = 1, ways = 0;
        for(int i = 2; i < n; i++) {
            ways = slow + fast;
            fast = slow;
            slow = ways;
        }
        return ways;
    }
};