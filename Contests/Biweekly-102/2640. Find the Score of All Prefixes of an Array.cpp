// Problem Link - https://leetcode.com/contest/biweekly-contest-102/problems/find-the-score-of-all-prefixes-of-an-array/

class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        long long large = nums[0], sum = 0;
        vector<long long> ans;
        for(auto &i : nums) {
            if(large < i) large = i;
            long long t = i + large;
            sum += t;
            ans.emplace_back(sum);
        }
        return ans;
    }
};