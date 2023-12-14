#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int x, y, z;
        cin >> x >> y >> z;
        int ti = x*y, tx = z*24*60;
        if(ti <= tx) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}