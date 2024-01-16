// Problem Link - https://leetcode.com/contest/biweekly-contest-114/problems/minimum-operations-to-collect-elements/

class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int n = nums.size(), i = 0;
        set<int> ans;
        for(int i = n-1; i >= 0; i--) {
            if(nums[i] <= k) {
                ans.insert(nums[i]);
                if(ans.size() == k) {
                    return n-i;
                }
            }
        }
        return n-i;
    }
};