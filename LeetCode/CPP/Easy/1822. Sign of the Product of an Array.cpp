// Problem Link
// https://leetcode.com/problems/sign-of-the-product-of-an-array/

// Solution:
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int p = 1;
        for(auto &i : nums) {
            if(i == 0) return 0;
            else if(i < 0) p *= -1;
        }
        if(p > 0) return 1;
        return -1;
    }
};