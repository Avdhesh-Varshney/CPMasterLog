// Problem Link:
// https://leetcode.com/problems/find-the-duplicate-number/

// Solution:
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++) {
            int b = abs(nums[i]);
            if(nums[b-1] < 0)
                return b;
            else
                nums[b-1] =- nums[b-1];
        }
        return -1;
    }
};