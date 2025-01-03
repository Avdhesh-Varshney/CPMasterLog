// Problem Link: https://leetcode.com/problems/number-of-ways-to-split-array

// Solution:
class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long long leftSum = 0, rightSum = 0;
        for(auto &i : nums) rightSum += i;
        int ans = 0;
        for(int i = 0; i < nums.size()-1; i++) {
            leftSum += nums[i]; rightSum -= nums[i];
            if(leftSum >= rightSum) ++ans;
        }
        return ans;
    }
};