#include<bits/stdc++.h>
using namespace std;

int t, n, q, i;
string s;
char c;

int main() {
    cin >> t;
    while(t--) {
        cin >> s;
        set<int> st;
        n = s.size();
        for(int i = 0; i < n-3; i++) if(s.substr(i,4) == "1100") st.insert(i);
        cin >> q;
        while(q--) {
            cin >> i >> c;
            if(n < 4) {
                cout << "NO" << endl;
                continue;
            }
            i--;
            if(s[i] != c) {
                s[i] = c;
                for(int j = i-3; j <= i; j++) {
                    if(j < 0 || j >= n) continue;
                    if(s.substr(j, 4) == "1100") st.insert(j);
                    else st.erase(j);
                }
            }
            cout << (st.size() > 0? "YES": "NO") << endl;
        }
    }
    return 0;
}