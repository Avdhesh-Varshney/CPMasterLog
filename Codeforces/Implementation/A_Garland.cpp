#include <bits/stdc++.h>
using namespace std;
int main() {
    int t = 1;
    string s;
    cin >> t;
    while(t--) {
        cin >> s;
        unordered_map<char, int> m;
        int maxo = 0;
        for(auto &ch : s) {
            m[ch]++;
            maxo = max(maxo, m[ch]);
        }
        if(maxo == 1 || maxo == 2) cout << 4 << endl;
        else if(maxo == 3) cout << 6 << endl;
        else cout << -1 << endl;
    }
    return 0;
}