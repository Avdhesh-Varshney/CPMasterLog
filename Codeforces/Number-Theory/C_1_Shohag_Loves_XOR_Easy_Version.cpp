#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    long long x, m;
    cin >> t;
    while(t--) {
        cin >> x >> m;
        int ans = 0;
        for(int y = 1; y <= min(2ll * x, m); y++)
            if(x != y and ((x % (x ^ y)) == 0 or (y % (x ^ y)) == 0)) ++ans;
        cout << ans << endl;
    }
    return 0;
}