// Problem Link:
// https://leetcode.com/problems/minimum-number-of-operations-to-make-array-xor-equal-to-k

// Solution:
class Solution {
public:
    int countBits(int& x) {
        int cnt = 0;
        while(x > 0) {
            if(x%2 == 1) ++cnt;
            x /= 2;
        }
        return cnt;
    }
    int minOperations(vector<int>& nums, int k) {
        int x = 0;
        for(int i = 0; i < nums.size(); i++) x ^= nums[i];
        x ^= k;
        return countBits(x);
    }
};