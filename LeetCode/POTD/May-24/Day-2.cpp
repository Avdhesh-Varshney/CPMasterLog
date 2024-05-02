// https://leetcode.com/problems/largest-positive-integer-that-exists-with-its-negative/description/?envType=daily-question&envId=2024-05-02

class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int val = -1, n = nums.size();
        for(int i = 0; i < n; i++) {
            if(val < nums[i])
                if(find(nums.begin(), nums.end(), -1*nums[i]) != nums.end())
                    val = nums[i];
        }
        return val;
    }
};