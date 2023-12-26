#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    string s, ans = "";
    cin >> t;
    while(t--) {
        cin >> s;
        int n = s.length(), idx = 1;
        ans = s[0];
        while(idx < n && s[idx] == '0') ans += s[idx++];
        if(idx != n) {
            int a = stoi(ans), b = stoi(s.substr(idx, n));
            if(a >= b) cout << -1 << endl;
            else cout << a << " " << b << endl;
        } else cout << -1 << endl;
    }
    return 0;
}