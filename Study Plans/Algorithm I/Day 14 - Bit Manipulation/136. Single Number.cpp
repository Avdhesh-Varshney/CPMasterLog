// Question 2

// Problem Link
// https://leetcode.com/problems/single-number/?envType=study-plan&envId=algorithm-i&plan=algorithm

// Solution:
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for(auto &i : nums) ans ^= i;
        return ans;
    }
};