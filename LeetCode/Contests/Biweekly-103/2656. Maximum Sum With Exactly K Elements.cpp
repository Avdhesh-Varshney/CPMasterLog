// Problem Link - https://leetcode.com/contest/biweekly-contest-103/problems/maximum-sum-with-exactly-k-elements/

class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end(), greater<int>());
        int a = nums[0], sum = 0;
        while(k--) {
            sum += a;
            a++;
        }
        return sum;
    }
};