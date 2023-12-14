#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n, x;
        cin >> n >> x;
        x -= n;
        if(x > 0) cout << 2*x << endl;
        else cout << 0 << endl;
    }
    return 0;
}