#include <bits/stdc++.h>
using namespace std;
int main() {
    int t, n, k, temp;
    cin >> t;
    while(t--) {
        cin >> n >> k;
        bool flag = false;
        for(int i = 0; i < n; i++) {
            cin >> temp;
            if(temp == k) flag = true;
        }
        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}