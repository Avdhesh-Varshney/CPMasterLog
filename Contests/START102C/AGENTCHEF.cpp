#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        float n;
        cin >> n;
        n /= 5;
        int ans = 100/n;
        if(ans*n >= 100) cout << ans << endl;
        else cout << ++ans << endl;
    }
    return 0;
}