// Problem Link - https://leetcode.com/contest/weekly-contest-350/problems/find-the-value-of-the-partition/

class Solution {
public:
    int findValueOfPartition(vector<int>& nums) {
        int ans = INT_MAX;
        sort(nums.begin(), nums.end());
        for(int i = 1; i < nums.size(); i++) {
            if(ans > abs(nums[i]-nums[i-1])) ans = abs(nums[i]-nums[i-1]);
        }
        return ans;
    }
};