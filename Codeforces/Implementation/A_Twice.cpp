#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, temp;
    cin >> t;
    while(t--) {
        cin >> n;
        unordered_map<int, int> mp;
        for(int i = 0; i < n; i++) {
            cin >> temp;
            mp[temp]++;
        }
        int ans = 0;
        for(auto &i: mp) {
            while(i.second > 1) {
                i.second -= 2;
                ++ans;
            }
        }
        cout << ans << endl;
    }
    return 0;
}