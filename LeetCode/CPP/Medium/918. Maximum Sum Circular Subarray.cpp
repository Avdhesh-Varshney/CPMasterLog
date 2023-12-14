// Problem Link
// https://leetcode.com/problems/maximum-sum-circular-subarray/

// Solution:
class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        if(nums.size() == 1)
            return nums[0];
        int sum = 0, currMax = nums[0], Max = nums[0], currMin = nums[0], Min = nums[0], n = nums.size();
        for(int i = 0; i < n; i++)
            sum += nums[i];
        for(int i = 1; i < n; i++) {
            currMax = max(currMax + nums[i], nums[i]);
            Max = max(currMax, Max);
            currMin = min(currMin + nums[i], nums[i]);
            Min = min(currMin, Min);
        }
        if(sum == Min)
            return Max;
        return max(Max, sum-Min);
    }
};