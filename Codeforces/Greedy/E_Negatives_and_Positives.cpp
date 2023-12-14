#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        ll a[n], ans = 0, cn = 0, small = INT_MAX;
        for(ll i = 0; i < n; i++) {
            cin >> a[i];
            ans += abs(a[i]);
            if(a[i] < 0)
                cn++;
            if(abs(a[i]) < small)
                small = abs(a[i]);
        }
        if(cn%2 != 0)
            ans -= 2*small;
        cout << ans << endl;
    }
    return 0;
}