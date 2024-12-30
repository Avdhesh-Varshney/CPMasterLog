#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int t;
    ll k, l1, l2, r1, r2;
    cin >> t;
    while(t--) {
        cin >> k >> l1 >> r1 >> l2 >> r2;
        ll kn = 1, ans = 0;
        for(int n = 0; r2/kn >= l1; n++) {
            ans += max(0ll, min(r2/kn, r1) - max((l2-1)/kn+1, l1) + 1ll);
            kn *= k;
        }
        cout << ans << endl;
    }
    return 0;
}