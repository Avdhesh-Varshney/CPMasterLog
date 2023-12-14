#include <bits/stdc++.h>
#define ll long long
#define ios                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
using namespace std;

int main() {
    ios;
    ll t;
    cin >> t;
    while (t--) {
        ll n, sum = 0, sum2 = 0;
        cin >> n;
        vector<ll> a(n), b(n);
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }
        for (ll i = 0; i < n; i++) {
            cin >> b[i];
            sum2 += b[i];
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        ll mini = min((a[0] * n) + sum2, (b[0] * n) + sum);
        cout << mini << endl;
    }
    return 0;
}