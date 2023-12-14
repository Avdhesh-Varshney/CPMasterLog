#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        int total = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            total ^= arr[i];
        }
        int ans = total;
        for(int i = 0; i < n; i++) {
            int x = total ^ arr[i];
            ans = min(ans, x);
        }
        cout << ans << endl;
    }
    return 0;
}