// https://leetcode.com/problems/minimize-maximum-pair-sum-in-array/description/?envType=daily-question&envId=2023-11-17

class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int ans = 0, n = nums.size();
        for(int i = 0; i < n/2; i++) if(nums[i] + nums[n-i-1] > ans) ans = nums[i] + nums[n-i-1];
        return ans;
    }
};