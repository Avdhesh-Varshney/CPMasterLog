#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    int t, n, m, r, c;
    cin >> t;
    while(t--) {
        cin >> n >> m >> r >> c;
        cout << (n-r)*(2*m-1) + (m-c) << endl;
    }
    return 0;
}