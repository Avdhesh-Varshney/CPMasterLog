// https://leetcode.com/problems/minimum-increment-to-make-array-unique/description/?envType=daily-question&envId=2024-06-14

class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int ans = 0, temp = nums[0];
        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] == temp) {
                ++temp; ++ans;
            } else if(temp > nums[i]) {
                ++temp; ans += (temp - nums[i]);
            } else temp = nums[i];
        }
        return ans;
    }
};