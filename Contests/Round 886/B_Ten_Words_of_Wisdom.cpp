#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, ans = 0;
        cin >> n;
        vector<pair<int, int>> v;
        for(int i = 0; i < n; i++) {
            int a, b;
            cin >> a >> b;
            v.emplace_back(make_pair(b, a));
        }
        vector<pair<int, int> > a = v;
        sort(v.begin(), v.end(), greater<pair<int, int>>());
        for(int i = 0; i < n; i++) {
            if(v[i].second <= 10) {
                ans = v[i].first;
                break;
            }
        }
        for(int i = 0; i < n; i++) {
            if(a[i].first == ans) {
                cout << i+1 << endl;
                break;
            }
        }
    }
    return 0;
}