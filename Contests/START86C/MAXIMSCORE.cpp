#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n], ans = INT_MAX;
        for(int i = 0; i < n; i++) cin >> a[i];
        ans = min(ans, abs(a[0]-a[1]));
        ans = min(ans, abs(a[n-1]-a[n-2]));
        for(int i = 1; i < n-1; i++)
            ans = min(ans, max(abs(a[i]-a[i+1]), abs(a[i]-a[i-1])));
        cout << ans << endl;
    }
    return 0;
}