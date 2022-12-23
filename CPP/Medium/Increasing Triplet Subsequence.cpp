// Problem Link:
// https://leetcode.com/problems/increasing-triplet-subsequence/

// Solution:
class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int a = INT_MAX, b = INT_MAX;
        for(int i = 0; i < nums.size(); i++) {
            int c = nums[i];
            if(a >= c)
                a = c;
            else if(b >= c)
                b = c;
            else
                return true;
        }
        return false;
    }
};