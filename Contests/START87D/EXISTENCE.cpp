#include <bits/stdc++.h>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        long long x, y;
        cin >> x >> y;
        if(x*x == 2*y) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}