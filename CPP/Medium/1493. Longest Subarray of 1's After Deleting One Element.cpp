// Problem Link
// https://leetcode.com/problems/longest-subarray-of-1s-after-deleting-one-element/

// Solution:
class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int i = 0, k = 1, res = 0;
        for(int j = 0; j < nums.size(); j++) {
            if(nums[j] == 0) k--;
            while(k < 0) {
                if(nums[i] == 0) k++;
                i++;
            }
            res = max(res, j-i);
        }
        return res;
    }
};