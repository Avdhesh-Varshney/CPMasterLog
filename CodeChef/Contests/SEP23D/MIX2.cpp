#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        ull n, ans = 0;
        cin >> n;
        ull a[n];
        for(ull i = 0; i < n; i++) cin >> a[i];
        for(ull i = 0; i < n; i++)
            for(ull j = i+1; j < n; j++) ans += a[i]*a[j];
        cout << ans << endl;
    }
    return 0;
}