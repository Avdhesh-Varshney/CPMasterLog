// Question 1

// Problem Link
// https://leetcode.com/problems/binary-search/

// Solution:
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int st = 0, lt = nums.size()-1, mid = (st+lt)/2, ans = -1;
        while(st <= lt) {
            if(nums[mid] == target) {
                ans = mid;
                break;
            }
            else if(nums[mid] < target)
                st = mid+1;
            else if(nums[mid] > target)
                lt = mid-1;
            mid = (st+lt)/2;
        }
        return ans;
    }
};