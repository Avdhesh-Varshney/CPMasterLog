// Question 2

// Problem Link
// https://leetcode.com/problems/permutations/?envType=study-plan&envId=algorithm-i&plan=algorithm

// Solution:
class Solution {
    void permuteRecursive(vector<int>& nums, int begin, vector<vector<int>>& res) {
        if(begin >= nums.size()) {
            res.emplace_back(nums);
            return;
        }
        for(int i = begin; i < nums.size(); i++) {
            swap(nums[begin], nums[i]);
            permuteRecursive(nums, begin + 1, res);
            swap(nums[begin], nums[i]);
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        permuteRecursive(nums, 0, res);
        return res;
    }
};