#include <bits/stdc++.h>
using namespace std;
using ll = long long;

/*
Method 1

void solve() {
    ll n, k;
    cin >> n >> k;
    vector<ll> p2, pre2;
    ll tk = n;
    ll i = 0;
    while (n > 0ll and i < k) {
        p2.push_back((1ll << i));
        n -= (1ll << i);
        i++;
    }
    pre2.push_back(p2[0]);
    for (ll i = 1; i < p2.size(); i++) pre2.push_back(p2[i] + pre2[i - 1]);
    ll cnt = 0;
    for (ll i = 0; i < pre2.size(); i++) {
        if (pre2[i] <= tk) cnt++;
        else break;
    }
    ll ans = (1ll << cnt) - 1ll;
    ll sum = 0ll;
    for (ll i = p2.size() - 1; i >= 0; i--) {
        if (sum + p2[i] <= tk and i >= cnt) {
            sum += p2[i];
            ans++;
            cnt = 0;
            ll extra = tk - sum;
            for (ll k = 0; k < pre2.size(); k++) {
                if (pre2[k] <= extra) cnt++;
                else break;
            }
            ans += (1ll << cnt) - 1ll;
        }
    }
    cout << ++ans << endl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}
*/

// Method 2

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        if(log2(n) < k) cout << n+1 << endl;
        else cout << (int)pow(2, k) << endl;
    }
    return 0;
}