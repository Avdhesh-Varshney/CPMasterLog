#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    string ans = "-1";
    long v[26] = {0};
    for(long i = 1; i < s.size(); i++) {
        if(v[s[i] - 'a'] > 0) continue;
        v[s[i] - 'a'] = i;
    }
    bool found = false;
    for(long i = t.size()-2; i >= 0; i--) {
        if(v[t[i] - 'a'] <= 0) continue;
        long str = v[t[i] - 'a'] + t.size() - i;
        if(!found || str < ans.size()) {
            found = true;
            ans = s.substr(0, v[t[i] - 'a']) + t.substr(i);
        }
    }
    cout << ans << endl;
    return 0;
}