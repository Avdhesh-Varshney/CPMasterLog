// Problem Link:
// https://leetcode.com/problems/target-sum/description/

// Solution:
class Solution {
    void solve(int& n, vector<int>& nums, int& ans, int target, int id) {
        if(id >= n) {
            if(target == 0) ++ans;
            return;
        }
        solve(n, nums, ans, target + nums[id], id+1);
        solve(n, nums, ans, target - nums[id], id+1);
    }
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int ans = 0, n = nums.size();
        solve(n, nums, ans, target, 0);
        return ans;
    }
};