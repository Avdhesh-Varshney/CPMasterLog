// Problem Link - https://leetcode.com/contest/biweekly-contest-111/problems/count-pairs-whose-sum-is-less-than-target/

class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int n = nums.size(), cnt = 0;
        for(int i = 0; i < n; i++) {
            for(int j = i+1; j < n; j++)
                if(nums[i] + nums[j] < target) ++cnt;
        }
        return cnt;
    }
};