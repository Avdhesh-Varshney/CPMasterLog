// https://leetcode.com/problems/minimum-difference-between-largest-and-smallest-value-in-three-moves/description/?envType=daily-question&envId=2024-07-03

class Solution {
public:
    int minDifference(vector<int>& nums) {
        int n = nums.size();
        if(n <= 4) return 0;
        sort(nums.begin(), nums.end());
        int ans = nums[n-1] - nums[0];
        /* pairing with first and last 4th element and 
        increase it by 1 for other combination.
        */
        for(int i = 0; i <= 3; i++) ans = min(ans, nums[n-4+i] - nums[i]);
        return ans;
    }
};