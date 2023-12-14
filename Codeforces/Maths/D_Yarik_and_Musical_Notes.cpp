#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    map<double, ll> mp;
    ll ans = 0;
    for (int i = n - 1; i >= 0; i--) {
        double key = arr[i] - log2(arr[i]);
        ans += mp[key];
        mp[key]++;
    }
    cout << ans << "\n";
}
int main() {
    ll t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}