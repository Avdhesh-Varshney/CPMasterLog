// Problem Link - https://leetcode.com/contest/biweekly-contest-104/problems/sum-in-a-matrix/

class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
        int ans = 0, n = nums.size(), m = nums[0].size();
        for(auto &v : nums) {
            sort(v.begin(), v.end(), greater<int>());
        }
        for(int col = 0; col < m; col++) {
            int temp = 0;
            for(int row = 0; row < n; row++) {
                temp = max(temp, nums[row][col]);
            }
            ans += temp;
        }
        return ans;
    }
};