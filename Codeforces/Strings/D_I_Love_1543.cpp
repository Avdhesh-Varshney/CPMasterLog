#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t, n, m;
    cin >> t;
    while(t--) {
        cin >> n >> m;
        vector<string> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];
        int ans = 0;
        for(int r = 0; 2*r <= min(n-1,m-1); r++) {
            string t = "";
            for(int j = r+1; j < m-r; j++) t += v[r][j];
            for(int j = r+1; j < n-r; j++) t += v[j][m-1-r];
            for(int j = m-2-r; j >= r; j--) t += v[n-1-r][j];
            for(int j = n-2-r; j >= r; j--) t += v[j][r];
            t += t.substr(0,3);
            for(int i = 0; i <= int(t.size())-4; i++) if(t.substr(i, 4) == "1543") ans++;
        }
        cout << ans << endl;
    }
    return 0;
}