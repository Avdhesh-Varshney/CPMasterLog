#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n), d(n);
        map<int, int> m;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            m[a[i]]++;
        }
        for(int i = 0; i < n; i++) {
            cin >> d[i];
            m[d[i]]++;
        }
        int ans = INT_MIN;
        for(auto &it : m) {
            if(it.second > ans) ans = it.second;
        }
        cout << ans << endl;
    }
    return 0;
}