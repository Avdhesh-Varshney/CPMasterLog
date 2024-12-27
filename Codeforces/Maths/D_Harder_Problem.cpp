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
            if(mp.find(temp) == mp.end()) mp[temp] = i;
        }
        vector<int> ans(n, 0);
        for(int i = 1; i <= n; i++) if(mp.find(i) != mp.end()) ans[mp[i]] = i;
        int id = 1;
        for(int i = 0; i < n; i++) {
            if(ans[i] == 0) {
                while(mp.find(id) != mp.end()) id++;
                mp[id] = i;
                cout << id << " ";
            } else cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}