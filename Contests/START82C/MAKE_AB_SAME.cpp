#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin >> n;
    int a[n], b[n], flag = 1;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    for(int i = 0; i < n; i++)
        cin >> b[i];
    if(a[0] != b[0]) {
        cout << "NO" << endl;
        return;
    }
    if(a[n-1] != b[n-1]) {
        cout << "NO" << endl;
        return;
    }
    int x = 0, y = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] == 0)
            x++;
        else
            y++;
    }
    for(int i = 1; i < n-1; i++) {
        if(a[i] != b[i] && a[i] == 0 && y == 0) {
            cout << "NO" << endl;
            return;
        }
        else if(a[i] != b[i] && a[i] == 1) {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
    return;
}
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}