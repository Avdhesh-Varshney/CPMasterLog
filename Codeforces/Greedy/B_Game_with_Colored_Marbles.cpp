#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, temp;
    cin >> t;
    while(t--) {
        cin >> n;
        unordered_map<int, int> m;
        for(int i = 0; i < n; i++) {
            cin >> temp;
            m[temp]++;
        }
        int unique = 0, non_unique = 0;
        for(auto &i : m) {
            if(i.second == 1) ++unique;
            else ++non_unique;
        }
        cout << non_unique + (unique + 1) / 2 * 2 << endl;
    }
    return 0;
}