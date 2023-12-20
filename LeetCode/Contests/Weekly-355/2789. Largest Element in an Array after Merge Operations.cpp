// Problem Link - https://leetcode.com/contest/weekly-contest-355/problems/largest-element-in-an-array-after-merge-operations/

class Solution {
public:
    long long maxArrayValue(vector<int>& nums) {
        long long ans = nums[nums.size()-1];
        for(int i = nums.size()-2; i >= 0; i--) {
            if(nums[i] <= ans) {
                ans += nums[i];
            } else {
                ans = nums[i];
            }
        }
        return ans;
    }
};