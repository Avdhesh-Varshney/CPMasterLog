#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;
    while(q--) {
        int n, t, ans = -1, mx = -1;
        cin >> n >> t;
        vector<int> a(n), b(n);
        for(int i = 0; i < n; i++)
            cin >> a[i];
        for(int i = 0; i < n; i++)
            cin >> b[i];
        for(int i = 0; i < n; i++) {
            if(t >= a[i] && mx < b[i]) {
                ans = i+1;
                mx = b[i];
            }
            t--;
        }
        cout << ans << endl;
    }
    return 0;
}