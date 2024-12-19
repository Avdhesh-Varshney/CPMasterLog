#include <bits/stdc++.h>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n), x(n, 0), y(n, 0);
        for(int i = 0; i < n; i++) cin >> a[i];
        x[n-1] = a[n-1];
        for(int i = n-2; i >= 0; i--) x[i] = max(a[i], x[i+1]);
        for(int i = n-2; i >= 0; i--) {
            if(a[i] == x[i]) y[i] = 0;
            else y[i] = y[i+1] + 1;
        }
        cout << *max_element(y.begin(), y.end()) << endl;
    }
    return 0;
}