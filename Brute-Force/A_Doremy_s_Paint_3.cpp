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
        if(m.size() <= 2) {
            if(m.size() == 2) {
                auto it1 = m.begin();
                auto it2 = m.begin(); ++it2;
                if(abs(it1->second - it2->second) <= 1) cout << "Yes" << endl;
                else cout << "No" << endl;
            } else cout << "Yes" << endl;
        } else cout << "No" << endl;
    }
    return 0;
}