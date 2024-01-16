#include <bits/stdc++.h>
using namespace std;
bool check(int& n, int& x, string& s) {
    int swipe = 0;
    for(int i = 0; i < n; i++) {
        if(s[i] == '0') --swipe;
        else swipe = x;
        if(swipe < 0) return false;
    }
    return true;
}
int main() {
    // your code goes here
    int t, n, x;
    string s;
    cin >> t;
    while(t--) {
        cin >> n >> x >> s;
        if(check(n, x, s)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}