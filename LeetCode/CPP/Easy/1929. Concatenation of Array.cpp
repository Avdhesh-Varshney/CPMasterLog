// Problem Link
// https://leetcode.com/problems/concatenation-of-array/

// Solution:
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> v;
        v.resize(nums.size() + nums.size());
        copy(nums.begin(), nums.end(), v.begin());
        copy(nums.begin(), nums.end(), v.begin() + nums.size());
        return v;
    }
};