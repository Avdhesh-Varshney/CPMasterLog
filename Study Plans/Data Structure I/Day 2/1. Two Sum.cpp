// Problem Link:
// https://leetcode.com/problems/two-sum/description/

// Solution:
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size(), a = 0, b = 0;
        vector<int> ans;
        for(int i = 0; i < n-1; i++) {
            for(int j = i+1; j < n; j++) {
                if((nums[i] + nums[j]) == target) {
                    a = i;
                    b = j;
                }
            }
        }
        ans = {a, b};
        return ans;
    }
};