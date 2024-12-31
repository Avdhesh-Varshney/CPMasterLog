#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ll n, d, s;
    cin >> n >> d >> s;
    ll ini = min(d, n-s);
    ll res = s + (ini/s)*s;
    for(int i = 2; i <= sqrt(n); i++) {
        ll temp = min(d *i/(i-1), n);
        res = max(res, temp - temp % (i*s));
    }
    cout << res << endl;
    return 0;
}