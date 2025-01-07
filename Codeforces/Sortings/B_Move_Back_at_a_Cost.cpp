#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    int t, n, x, last;
    cin >> t;
    while(t--) {
        cin >> n;
        last = -1;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        for(int i = 1; i <= n; i++) {
            cin >> x;
            pq.push({x, i});
        }
        while(!pq.empty()) {
            int val = pq.top().first, id = pq.top().second; pq.pop();
            if(last < id) {
                cout << val << " ";
                last = id;
            } else pq.push({++val, ++n});
        }
        cout << endl;
    }
    return 0;
}