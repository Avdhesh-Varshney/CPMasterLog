#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, k;
    cin >> t;
    while(t--) {
        cin >> k;
        vector<int> a(k);
        unordered_map<int, int> mp;
        for(int i = 0; i < k; i++) {
            cin >> a[i];
            mp[a[i]]++;
        }
        k -= 2;
        for(int i = 0; i < k+2; i++) {
            if(k%a[i] == 0 && mp.find(k/a[i]) != mp.end()) {
                if(a[i] == k/a[i] && mp[a[i]] < 2) continue;
                cout << a[i] << " " << k/a[i] << endl;
                break;
            }
        }
    }
    return 0;
}