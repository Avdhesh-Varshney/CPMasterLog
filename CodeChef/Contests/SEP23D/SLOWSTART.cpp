#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int x, h, i = 0, ans = 0;
        cin >> x >> h;
        while(h > 0) {
            if(i >= 5) h -= x;
            else h -= x/2;
            ++i;
            ++ans;
        }
        cout << ans << endl;
    }
    return 0;
}