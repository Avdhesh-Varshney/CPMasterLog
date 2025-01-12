#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    int t, n;
    cin >> t;
    while(t--) {
        cin >> n;
        int ans = 1;
        while(n > 0) {
            n /= 4;
            if(n > 0) ans *= 2;
        }
        cout << ans << endl;
    }
    return 0;
}