#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t, n;
    cin >> t;
    while(t--) {
        cin >> n;
        vector<long long> a(n), b(n);
        for(long long i = 0; i < n; i++) cin >> a[i];
        long long ans = 0, large = -1e18;
        for(long long i = 0; i < n; i++) {
            cin >> b[i];
            ans += max(a[i], b[i]);
            large = max(large, min(a[i], b[i]));
        }
        cout << ans + large << endl;
    }
    return 0;
}