#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n, si = 0, b = 0;
        string s;
        cin >> n >> s;
        for(int i = 0; i < n; i++) {
            if(s[i] == '?') si++;
            else b = b + (s[i] - '0');
        }
        if(s[0] == '?') {
            cout << 1; si--;
            while(si--) {
                cout << 0;
            }
            cout << endl;
        } else {
            if(si > 0) {
                b = b%9;
                if(b == 0) {
                    --si;
                    while(si--) cout << 1;
                    cout << 2 << endl;
                } else {
                    while(si--) cout << 1;
                    cout << endl;
                }
            } else {
                if(b%9) cout << 0 << endl;
                else cout << 1 << endl;
            }
        }
    }
    return 0;
}