#include <bits/stdc++.h>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<long long> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];
        if(n <= 3) cout << 0 << endl;
        else {
            sort(v.begin(), v.end());
            cout << min(v[n-3]-v[0], min(v[n-2]-v[1], v[n-1]-v[2])) << endl;
        }
    }
    return 0;
}