#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, k;
    cin >> t;
    while(t--) {
        cin >> n >> k;
        vector<int> v(k);
        for(int i = 0; i < k; i++) {
            int a, b;
            cin >> a >> b;
            v[a-1] += b;
        }
        sort(v.rbegin(), v.rend());
        cout << accumulate(v.begin(), v.begin()+min(n, k), 0) << endl;
    }
    return 0;
}