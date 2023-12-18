#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, ml = 0, mo = 0, yl = 0, yo = 0;
    string s;
    cin >> n >> s;
    for(int i = 0; i < n; i++) {
        if(s[i] == 'L') ++yl;
        else ++yo;
    }
    for(int i = 0; i < n; i++) {
        if(s[i] == 'L') {
            ++ml; -- yl;
        } else {
            ++mo; -- yo;
        }
        if(ml != yl && mo != yo) break;
    }
    if(ml != yl && mo != yo && ml+mo >= 1 && yl+yo >= 1) cout << ml+mo << endl;
    else cout << -1 << endl;
    return 0;
}