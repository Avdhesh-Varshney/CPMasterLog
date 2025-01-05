#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int t;
    ll x;
    cin >> t;
    while(t--) {
        cin >> x;
        if(x%33 == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}