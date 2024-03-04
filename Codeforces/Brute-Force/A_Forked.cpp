#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ll t, a, b, x, y, p, q;
    cin >> t;
    while(t--) {
        cin >> a >> b >> x >> y >> p >> q;
        vector<ll> dx = {-a, -a, a, a, b, b, -b, -b};
        vector<ll> dy = {-b, b, b, -b, a, -a, a, -a};
        set<pair<int, int>> s;
        for(int k = 0; k < 8; k++) {
            int i = p + dx[k], j = q + dy[k];
            for(int z = 0; z < 8; z++) {
                int u = i + dx[z], v = j + dy[z];
                if(u == x && v == y) s.insert({i, j});
            }
        }
        cout << s.size() << endl;
    }
    return 0;
}