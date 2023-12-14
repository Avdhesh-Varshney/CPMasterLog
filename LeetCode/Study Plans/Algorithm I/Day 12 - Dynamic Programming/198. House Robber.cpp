// Question 2

// Problem Link
// https://leetcode.com/problems/house-robber/?envType=study-plan&envId=algorithm-i&plan=algorithm

// Solution:
class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        int prev1 = 0, prev2 = 0;
        for(auto &i : nums) {
            int temp = prev1;
            prev1 = max(prev2 + i, prev1);
            prev2 = temp;
        }
        return prev1;
    }
};