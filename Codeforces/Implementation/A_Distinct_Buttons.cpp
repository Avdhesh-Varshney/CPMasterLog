#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long
int main() {
    ll t, n, a, b;
    cin >> t;
    while(t--) {
        cin >> n;
        vector<ll> v1, v2;
        for(int i = 0; i < n; i++) {
            cin >> a >> b;
            v1.emplace_back(a);
            v2.emplace_back(b);
        }
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());
        bool ans = true;
        if(v1[0] < 0 && v1[n-1] > 0 && v2[0] < 0 && v2[n-1] > 0) ans = false;
        if(ans) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}