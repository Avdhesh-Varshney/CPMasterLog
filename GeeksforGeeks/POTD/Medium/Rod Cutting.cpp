// 12 June 2023

#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
    vector<vector<int>> dp;
    int solve(int i, int sum, int price[], int& n) {
        if(sum > n) return 0;
        if(i == n) return 0;
        if(dp[i][sum] != -1) return dp[i][sum];
        int ans = 0;
        ans = max(ans, solve(i+1, sum, price, n));
        if((sum+i+1) <= n) ans = max(ans, price[i] + solve(i, sum+i+1, price, n));
        return dp[i][sum] = ans;
    }
    int cutRod(int price[], int n) {
        //code here
        dp = vector<vector<int>>(n+1, vector<int>(n+1, -1));
        return solve(0, 0, price, n);
    }
};

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];

        Solution ob;
        cout << ob.cutRod(a, n) << endl;
    }
    return 0;
}