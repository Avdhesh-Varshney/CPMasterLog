#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ll t;
    string x, s;
    cin >> t;
    while (t--) {
        ll n, m, cnt = 6, f = 0, res = 0;
        cin >> n >> m >> x >> s;
        while(cnt--) {
            if(x.find(s) != string::npos) {
                f = 1;
                break;
            }
            res++;
            x += x;
        }
        if(f == 1) cout << res << endl;
        else cout << -1 << endl;
    }
    return 0;
}