#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i];
        sort(a.begin(), a.end(), greater<int>());
        sort(b.begin(), b.end());
        bool res = true;
        for(int i = 1; i < n && res; i++) if(a[i]+b[i] != a[i-1]+b[i-1]) res = false;
        if(res) {
            for(auto &i : a) cout << i << " ";
            cout << endl;
            for(auto &i : b) cout << i << " ";
            cout << endl;
        } else cout << -1 << endl;
    }
    return 0;
}