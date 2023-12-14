#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n], ans = 0;
        for(int i = 0; i < n; i++) cin >> a[i];
        sort(a, a+n);
        for(int i = 0; i < n/2; i++) {
            ans += abs(a[i]-a[n-i-1]);
        }
        cout << ans << endl;
    }
    return 0;
}