#include <bits/stdc++.h>
using namespace std;
int solve(int& n, string& s) {
    int cnt = 0, res = 0;
    for(int i = n-1; i >= 0; i--) {
        if(s[i] == 'B') ++cnt;
        else {
            res += cnt;
            if(cnt) {
                s[i] = 'B';
                cnt = 0;
                ++i;
            }
        }
    }
    return res;
}
int main() {
    int t, n;
    string s;
    cin >> t;
    while(t--) {
        cin >> n >> s;
        cout << solve(n, s) << endl;
    }
    return 0;
}