// https://leetcode.com/problems/frequency-of-the-most-frequent-element/description/?envType=daily-question&envId=2023-11-18

class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        int ans = 0;
        long curr = 0;
        sort(nums.begin(), nums.end());
        for(int left = 0, right = 0; right < nums.size(); ++right) {
            curr += nums[right];
            while(curr + k < (long) nums[right] * (right - left + 1)) {
                curr -= nums[left];
                left++;
            }
            ans = max(ans, right - left + 1);
        }
        return ans;
    }
};