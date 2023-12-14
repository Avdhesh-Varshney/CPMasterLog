#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n, small = INT_MAX, ans = 0;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++) {
            cin >> v[i];
            ans += v[i];
            small = min(small, v[i]);
        }
        if(small != INT_MAX) ans -= small;
        cout << ans << endl;
    }
    return 0;
}