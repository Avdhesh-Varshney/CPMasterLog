// https://leetcode.com/problems/number-of-dice-rolls-with-target-sum/description/?envType=daily-question&envId=2023-12-26

class Solution {
public:
    const int mod = 1e9 + 7;
    int numRollsToTarget(int n, int& k, int target) {
        vector<vector<int>> memo(n+1, vector<int>(target+1, -1));
        return helper(n, k, target, memo);
    }
    int helper(int n, int& k, int target, vector<vector<int>>& memo) {
        if(target == 0 && n == 0) return 1;
        else if(target <= 0 || n <= 0) return 0;
        else if(memo[n][target] != -1) return memo[n][target];
        int ans = 0;
        for(int i = k; i > 0; i--) {
            if(target >= i) ans = (ans + helper(n-1, k, target-i, memo))%mod;
            else i = target+1;
        }
        memo[n][target] = ans%mod;
        return memo[n][target];
    }
};