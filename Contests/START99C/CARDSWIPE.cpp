#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n, cnt = 0, temp, ans = 0;
        cin >> n;
        map<int, int> m;
        for(int i = 0; i < n; i++) {
            cin >> temp;
            m[temp]++;
            if(m.find(temp) != m.end()) {
                if(m[temp]%2 == 1) ++cnt;
                else --cnt;
            }
            ans = max(ans, cnt);
        }
        cout << ans << endl;
    }
    return 0;
}