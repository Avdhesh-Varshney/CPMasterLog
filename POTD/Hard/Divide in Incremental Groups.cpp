// 27 March 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int countWaystoDivide(int N, int K) {
        // Code here
        if(N < K)
            return 0;
        vector<vector<int>> dp(N+1, vector<int>(K+1));
        for(int i = 1; i <= N; i++)
            dp[i][1] = 1;
        dp[0][0] = 1;
        for(int i = 1; i <= N; i++) {
            for(int j = 2; j <= K; j++) {
                if(i >= j)
                    dp[i][j] = dp[i-1][j-1] + dp[i-j][j];
                else
                    dp[i][j] = dp[i-1][j-1];
            }
        }
        return dp[N][K];
    }
};

int main() {
    int t;
    cin >> t;
    while(t--) {
        int N, K;
        cin >> N >> K;
        Solution ob;
        cout << ob.countWaystoDivide(N, K) << endl;
    }
    return 0;
}