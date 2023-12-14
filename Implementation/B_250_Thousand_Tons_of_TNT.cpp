#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 2e5+5;
int n, a[N], sum[N];
int func(int k) {
    int mx = 0, mn = 0x3f3f3f3f3f3f3f3f;
    for(int i = 1; i <= n; i += k) {
        mx = max(mx, sum[i+k-1]-sum[i-1]);
        mn = min(mn, sum[i+k-1]-sum[i-1]);
    }
    return mx-mn;
}
void solve() {
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
        sum[i] = sum[i-1] + a[i];
    }
    int res = 0;
    for(int i = 1; i <= n/i; i++) {
        if(n%i == 0) {
            int k = n/i;
            res = max(res, func(k));
            if(i != k) res = max(res, func(i));
        }
    }
    cout << res << endl;
}
signed main() {
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}