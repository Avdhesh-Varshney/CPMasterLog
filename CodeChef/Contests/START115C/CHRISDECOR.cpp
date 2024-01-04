#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n, x, y;
        cin >> n >> x >> y;
        if(x < n) cout << "NO" << endl;
        else if(x == n && y < 3*n) cout << "NO" << endl;
        else {
            int cnt = y/3;
            n -= cnt;
            x -= cnt;
            if(x  < 2*n) cout << "NO" << endl;
            else cout << "YES" << endl;
        }
    }
    return 0;
}