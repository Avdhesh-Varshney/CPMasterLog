#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n), b(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];
    stack<int> s;
    for(int i = n-1; i >= 0; i--) {
        int x = min(k, a[i]/b[i]);
        s.push(x);
        k -= x;
    }
    if(k > 0) {
        for(int i = 0; i < n; i++) cout << 0 << " ";
    } else {
        while(!s.empty()) {
            cout << s.top() << " ";
            s.pop();
        }
    }
    cout << endl;
    return 0;
}