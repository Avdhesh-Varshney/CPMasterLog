#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, w, a, b, c;
    cin >> t;
    while(t--) {
        cin >> w >> a >> b >> c;
        int ans = min(w, a) + min(w, b);
        int leftSeats = 2*w - ans;
        cout << ans + min(leftSeats, c) << endl;
    }
    return 0;
}