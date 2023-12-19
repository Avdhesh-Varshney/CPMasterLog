// Problem Link - https://leetcode.com/contest/weekly-contest-352/problems/longest-even-odd-subarray-with-threshold/

class Solution {
public:
    int longestAlternatingSubarray(vector<int>& nums, int threshold) {
        int ans = 0, cnt = 0, n = nums.size();
        bool flag = false;
        if(nums[0]%2 == 0 && nums[0] <= threshold) {
            ++cnt;
            flag = true;
        }
        for(int i = 1; i < n; i++) {
            if(flag) {
                if(nums[i]%2 != nums[i-1]%2 && nums[i] <= threshold) ++cnt;
                else {
                    ans = max(ans, cnt);
                    cnt = 0;
                    flag = false;
                }
            }
            if(nums[i]%2 == 0 && nums[i] <= threshold && !flag) {
                flag = true;
                cnt = 1;
            }
        }
        ans = max(ans, cnt);
        return ans;
    }
};