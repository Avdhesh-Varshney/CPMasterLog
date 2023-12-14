// 15 January 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long countSubstring(string S){
        // code here
        int cnt = 0;
        long long int ans = 0;
        int n = S.size();
        vector<long long int> freq(2*n+2, 0);
        vector<long long int> dp(2*n+2, 0);
        freq[n]++;
        for(char c : S) {
            if(c == '0')
                cnt--;
            else
                cnt++;
            if(cnt-1 + n >= 0)
                dp[cnt+n] = dp[cnt-1+n] + freq[cnt-1+n];
            ans += dp[cnt+n];
            freq[cnt+n]++;
        }
        return ans;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    cin >> t;
    while(t--) {
        string S;
        cin >> S;
        Solution obj;
        long long ans = obj.countSubstring(S);
        cout << ans << endl;
    }
    return 0;
}
