// Problem Link
// https://leetcode.com/problems/special-array-with-x-elements-greater-than-or-equal-x/

// Solution:
class Solution {
public:
    int specialArray(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int count = nums.size();
        for(int i = -1; i <= 1000;) {
            for(int x = i+1; x <= nums[nums.size()-count]; x++)
                if(x == count) return x;
            i = nums[nums.size()-(count--)];
            if(count <= 0) break;
        }
        return -1;
    }
};