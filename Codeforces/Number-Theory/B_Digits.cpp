#include <bits/stdc++.h>
using namespace std;
signed main() {
    int t, n, d;
    cin >> t;
    while(t--) {
        cin >> n >> d;
        cout << 1;
        if(n >= 3 || d%3 == 0) cout << " 3";
        if(d == 5) cout << " 5";
        if(d == 7 || n >= 3) cout << " 7";
        if(d == 9 || (n >= 3 && d%3 == 0) || n >= 6) cout << " 9";
        cout << endl;
    }
    return 0;
}