#include <bits/stdc++.h>
using namespace std;
bool check(int& m, string& t) {
    for(int i = 1; i < m; i++) if(t[i] == t[i-1]) return false;
    return true;
}
bool checkmate(int& n, int& m, string& s, string& t) {
    for(int i = 1; i < n; i++)
        if(s[i] == s[i-1] && (s[i-1] == t[0] || t[m-1] == s[i])) return false;
    return true;
}
bool solve(int& n, int& m, string& s, string& t) {
    if(check(n, s) || (check(m, t) && checkmate(n, m, s, t))) return true;
    return false;
}
int main() {
    int t, n, m;
    string st, tt;
    cin >> t;
    while(t--) {
        cin >> n >> m >> st >> tt;
        if(solve(n, m, st, tt)) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}