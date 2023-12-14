// Problem Link
// https://leetcode.com/problems/build-array-from-permutation/

// Solution:
class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> v;
        for(int i = 0; i < nums.size(); i++)
            v.push_back(nums[nums[i]]);
        return v;
    }
};