#include <bits/stdc++.h>
using namespace std;
#define type long long
int main() {
    type t, n;
    cin >> t;
    while(t--) {
        cin >> n;
        type a[n], b[n];
        for(type i = 0; i < n; i++) cin >> a[i];
        type ans = 0, mx = INT_MIN, mn = INT_MAX;
        for(type i = 0; i < n; i++) {
            cin >> b[i];
            ans += abs(a[i] - b[i]);
            mx = max(mx, min(a[i], b[i]));
            mn = min(mn, max(a[i], b[i]));
        }
        if(mx > mn) ans += 2ll * (mx-mn);
        cout << ans << endl;
    }
    return 0;
}