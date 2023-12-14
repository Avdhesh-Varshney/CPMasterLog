#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, x;
        cin >> n >> x;
        vector<int> a(n+1, 0);
        for(int i = 1; i <= n; i++) cin >> a[i];
        ll mx = 0;
        bool flag = 0;
        for(ll i = 0; i < n; i++) {
            if(mx < a[i+1] - a[i]) mx = a[i+1] - a[i];
            flag = 1;
        }
        if(flag) {
            ll mx2 = ((x-a[n])*2);
            mx = max(mx, mx2);
        }
        cout << mx << endl;
    }
    return 0;
}