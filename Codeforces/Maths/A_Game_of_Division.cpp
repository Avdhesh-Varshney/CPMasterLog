#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, k;
    cin >> t;
    while(t--) {
        cin >> n >> k;
        vector<int> v(n);
        bool flag = false;
        for(int i = 0; i < n; i++) cin >> v[i];
        for(int i = 0; i < n; i++) {
            int cnt = 0;
            for(int j = 0; j < n; j++) {
                if(i != j && abs(v[i]-v[j])%k != 0) ++cnt;
            }
            if(cnt == n-1) {
                cout << "YES\n" << i+1 << endl;
                flag = true;
                break;
            }
        }
        if(!flag) cout << "NO\n";
    }
    return 0;
}