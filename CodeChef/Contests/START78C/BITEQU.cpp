#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve() {
    int n, j = 0;
    cin >> n;
    if(n == 0) {
        cout << 1 << " " << 3 << " " << 4 << " " << 5 << endl;
        return;
    }
    // 001
    // 010
    // 100
    // 110
    int ans[4] = {};
    ans[0] = ans[1] = ans[2] = n;
    for(int i = 0; i < 60; i++) {
        if(!(n & (1ll << i))) {
            ans[j] += (1ll << i);
            if(j == 2) {
                ans[3] += (1ll << i);
            }
            j++;
            j %= 3;
        }
    }
    for(int i = 0; i < 4; i++) {
        assert(ans[i] != 0);
        for(int j = i + 1; j < 4; j++)
            assert(ans[i] != ans[j]);
    }
    int val = ((ans[0] & ans[1]) | ans[2]) ^ ans[3];
    assert(val == n);
    if(ans[3] == 0) {
        cout << -1 << endl;
    }
    else {
        for(auto i : ans)
        cout << i << " ";
        cout << endl;
    }
}
int32_t main() {
    // your code goes here
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}