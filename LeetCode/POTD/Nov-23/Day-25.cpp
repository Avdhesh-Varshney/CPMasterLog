// https://leetcode.com/problems/sum-of-absolute-differences-in-a-sorted-array/description/?envType=daily-question&envId=2023-11-25

class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n = nums.size(), sum = accumulate(nums.begin(), nums.end(), 0);
        int left = 0, right = sum;
        vector<int> ans(n, 0);
        for(int i = 0; i < n; i++) {
            right -= nums[i];
            ans[i] = nums[i]*1ll*i - left + right - nums[i]*1ll*(n-i-1);
            left += nums[i];
        }
        return ans;
    }
};