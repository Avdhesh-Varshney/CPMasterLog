// Problem Link - https://leetcode.com/contest/biweekly-contest-109/problems/check-if-array-is-good/

class Solution {
public:
    bool isGood(vector<int>& nums) {
        int n = nums.size();
        if(n < 2) return false;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < n-1; i++) {
            if(nums[i] != i+1) return false;
        }
        if(nums[n-1] != nums[n-2]) return false;
        return true;
    }
};