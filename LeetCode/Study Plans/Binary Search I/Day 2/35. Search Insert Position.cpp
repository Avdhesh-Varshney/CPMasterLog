// Question 1

// Problem Link:
// https://leetcode.com/problems/search-insert-position/

// Solution:
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        if(n == 1 and nums[0] == target) {
            return n-1;
        }
        else if(target == nums[n-1]) {
            return n-1;
        }
        else if(target > nums[n-1]) {
            return n;
        }
        else {
            for(int i = 0; i < n; i++) {
                if(nums[i] >= target) {
                    n = i;
                }
            }
        }
        return n;
    }
};