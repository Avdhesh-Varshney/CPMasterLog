#include <bits/stdc++.h>
using namespace std;
int solve(vector<set<int>>& v, int cnt) {
    int ans = 0;
    for(int i = 1; i <= 50; i++) {
        set<int> temp;
        for(auto &x : v) if(x.find(i) == x.end()) temp.insert(x.begin(), x.end());
        if((int)temp.size() == cnt) continue;
        ans = max(ans, (int)temp.size());
    }
    return ans;
}
int main() {
    int t, n, m, temp;
    cin >> t;
    while(t--) {
        cin >> n;
        vector<set<int>> v;
        set<int> s;
        for(int i = 0; i < n; i++) {
            cin >> m;
            set<int> x;
            for(int j = 0; j < m; j++) {
                cin >> temp;
                x.insert(temp);
                s.insert(temp);
            }
            v.emplace_back(x);
        }
        cout << solve(v, s.size()) << endl;
    }
    return 0;
}