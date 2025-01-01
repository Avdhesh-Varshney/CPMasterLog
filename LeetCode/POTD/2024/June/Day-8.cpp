// https://leetcode.com/problems/continuous-subarray-sum/description/?envType=daily-question&envId=2024-06-08

class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        if(n < 2) return false;
        unordered_map<int, vector<int>> mp;
        mp[0].emplace_back(0);
        int sum = 0;
        for(int i = 0; i < n; i++) {
            sum += nums[i];
            int rem = sum%k;
            if(mp.count(rem) && (i+1-mp[rem][0] >= 2)) return true;
            mp[rem].emplace_back(i+1);
        }
        return false;
    }
};