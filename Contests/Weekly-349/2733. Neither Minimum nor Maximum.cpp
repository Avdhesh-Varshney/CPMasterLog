// Problem Link - https://leetcode.com/contest/weekly-contest-349/problems/neither-minimum-nor-maximum/

class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        if(nums.size() < 3) return -1;
        sort(nums.begin(), nums.end());
        return nums[1];
    }
};