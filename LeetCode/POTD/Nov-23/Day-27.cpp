// https://leetcode.com/problems/knight-dialer/description/?envType=daily-question&envId=2023-11-27

class Solution {
public:
    const vector<vector<int>> keypad{{4,6},{6,8},{7,9},{4,8},{0,3,9},{},{1,7,0},{2,6},{1,3},{4,2}};
    const int mod = 1e9 + 7;
    int knightDialer(int n) {
        if(n == 1) return 10;
        vector<vector<int>> dp(10, vector<int>(n+1, 0));
        for(int i = 0; i < 10; i++) dp[i][1] = 1;
        for(int j = 2; j <= n; j++)
            for(int i = 0; i < 10; i++)
                for(int k = 0; k < keypad[i].size(); k++)
                    dp[i][j] = (dp[i][j] + dp[keypad[i][k]][j-1]%mod)%mod;
        int ans = 0;
        for(int i = 0; i < 10; i++) ans = (ans + dp[i][n])%mod;
        return ans;
    }
};