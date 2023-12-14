#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int x, y, z;
        cin >> x >> y >> z;
        if((y*1LL*z)%x == 0) cout << (y*1LL*z) << " " << x << endl;
        else if((x*1LL*z)%y == 0) cout << (x*1LL*z) << " " << y << endl;
        else if((x*1LL*y)%z == 0) cout << (x*1LL*y) << " " << z << endl;
        else cout << -1 << endl;
    }
    return 0;
}