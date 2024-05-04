#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while(t--) {
        cin >> n;
        vector<int> a(n);
        unordered_map<int, int> m;
        for(int i = 0; i < n; i++) { cin >> a[i]; m[a[i]]++; }
        if(n == 1 || m.size() == 1) cout << -1 << endl;
        else {
            int cnt = 0, ans = n;
            for(int i = 0; i < n; i++) {
                if(a[i] == a[0]) ++cnt;
                else { ans = min(ans, cnt); cnt = 0; }
            }
            cout << min(ans, cnt) << endl;
        }
    }
    return 0;
}