#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while(t--) {
        cin >> n;
        int a[n];
        vector<int> ans;
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n-1; i++) ans.emplace_back(min(a[i], a[i+1]));
        for(int i = 0; i < n-2; i++) ans.emplace_back(min(a[i], a[i+2]));
        cout << *max_element(ans.begin(), ans.end()) << endl;
    }
    return 0;
}