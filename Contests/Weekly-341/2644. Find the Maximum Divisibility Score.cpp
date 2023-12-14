// Problem Link - https://leetcode.com/contest/weekly-contest-341/problems/find-the-maximum-divisibility-score/

class Solution {
public:
    int maxDivScore(vector<int>& nums, vector<int>& divisors) {
        sort(divisors.begin(), divisors.end());
        int cnt = 0, ans = 0;
        for(int i = 0; i < divisors.size(); i++) {
            int t = 0;
            for(int j = 0; j < nums.size(); j++)
                if(nums[j]%divisors[i] == 0) t++;
            if(cnt < t) {
                cnt = t;
                ans = divisors[i];
            }
        }
        if(ans == 0) return divisors[0];
        return ans;
    }
};