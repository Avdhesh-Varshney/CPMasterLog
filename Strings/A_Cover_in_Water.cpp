#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    string s;
    cin >> n >> s;
    int ans = 0, o = 0, tot = 0;
    for(int i = 0; i < n; i++) {
        if(s[i] == '.' && o == 1) {
            ++ans;
            ++tot;
        }
        if(tot >= 3) {
            ans = 2;
            break;
        }
        if(s[i] == '.' && o == 0) {
            o = 1;
            ++ans;
            ++tot;
        }
        if(o == 1 && s[i] == '#') {
            tot = 0;
            o = 0;
        }
    }
    cout << ans << endl;
}
signed main() {
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}