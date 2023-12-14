// 28 January 2023

#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    bool isScramble(string S1, string S2) {
        // code here
        if(S1.length() != S2.length())
            return false;
        int n = S1.length();
        bool dp[n][n][n];
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                dp[i][j][0] = (S1[i] == S2[j]);
        for(int k = 2; k <= n; k++) {
            for(int i = 0; i <= n-k; i++) {
                for(int j = 0; j <= n-k; j++) {
                    dp[i][j][k-1] = false;
                    for(int p = 1; p < k; p++) {
                        if((dp[i][j][p-1] && dp[i+p][j+p][k-p-1]) || (dp[i][j+k-p][p-1] && dp[i+p][j][k-p-1])) {
                            dp[i][j][k-1] = true;
                            break;
                        }
                    }
                }
            }
        }
        return dp[0][0][n-1];
    }
};

int main() {
    int t;
    cin >> t;
    while(t--) {
        string S1, S2;
        cin >> S1 >> S2;
        Solution ob;
        if(ob.isScramble(S1, S2))
            cout << "Yes";
        else
            cout << "No";
        cout << endl;
    }
    return 0;
}
