#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int x, y, r;
        cin >> x >> y >> r;
        int extra = r/30;
        x += extra;
        if(x%y == 0) cout << x/y << endl;
        else cout << (x/y)+1 << endl;
    }
    return 0;
}