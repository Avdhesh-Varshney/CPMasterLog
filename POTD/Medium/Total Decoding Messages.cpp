// 27 January 2023

#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    const int mod = 1e9 + 7;
    int CountWays(string str){
        // Code here
        int n = str.size();
        if(n == 0 || str[0] == '0')
            return 0;
        int dp[n+1];
        dp[0] = dp[1] = 1;
        for(int i = 2; i <= n; i++) {
            if(str[i-1] == '0') {
                if(str[i-2] == '1' || str[i-2] == '2')
                    dp[i] = dp[i-2];
                else
                    return 0;
            }
            else if(str[i-2] == '1' || (str[i-2] == '2' && str[i-1] >= '1' && str[i-1] <= '6'))
                dp[i] = (dp[i-1] + dp[i-2])%mod;
            else
                dp[i] = dp[i-1];
        }
        return dp[n];
    }
};

int main() {
    int tc;
    cin >> tc;
    while(tc--) {
        string str;
        cin >> str;
        Solution obj;
        int ans = obj.CountWays(str);
        cout << ans << endl;
    }
    return 0;
}
