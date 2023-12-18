#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
    ll t, n;
    string s;
    cin >> t;
    while (t--) {
        cin >> n >> s;
        cout << s[n-1] << endl;
    }
    return 0;
}