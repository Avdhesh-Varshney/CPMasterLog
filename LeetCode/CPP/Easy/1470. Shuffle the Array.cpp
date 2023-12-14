// Problem Link
// https://leetcode.com/problems/shuffle-the-array/

// Solution:
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans;
        for(int i = 0; i < n; i++) {
            int temp = nums[i];
            ans.push_back(temp);
            temp = nums[n+i];
            ans.push_back(temp);
        }
        nums = ans;
        return nums;
    }
};