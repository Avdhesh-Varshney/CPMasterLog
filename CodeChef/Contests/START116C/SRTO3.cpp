#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int t, n, m, temp;
    cin >> t;
    while(t--) {
        cin >> n >> m;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        int large = INT_MIN;
        for(int i = 0; i < m; i++) {
            cin >> temp;
            large = max(large, temp);
        }
        if(n-large > 0) sort(a.begin()+(n-large), a.end());
        else sort(a.begin(), a.end());
        for(auto &i : a) cout << i << " ";
        cout << endl;
    }
    return 0;
}