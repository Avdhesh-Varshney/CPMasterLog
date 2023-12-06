// Problem Link - https://leetcode.com/contest/weekly-contest-348/problems/semi-ordered-permutation/

class Solution {
public:
    int semiOrderedPermutation(vector<int>& nums) {
        int start = -1, last = -1, n = nums.size();
        for(int i = 0; i < n; i++) {
            if(nums[i] == 1) start = i;
            if(nums[i] == n) last = i;
            if(start != -1 && last != -1) break;
        }
        if(start > last) return start + (n-last-1) -1;
        return start + (n-last-1);
    }
};