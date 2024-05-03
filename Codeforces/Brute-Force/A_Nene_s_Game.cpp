#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, q, temp;
    cin >> t;
    while(t--) {
        cin >> n >> q;
        int a[n], small = INT_MAX;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            if(a[i] < small) small = a[i];
        }
        for(int i = 0; i < q; i++) {
            cin >> temp;
            if(temp >= small) cout << small-1 << " ";
            else cout << temp << " ";
        }
        cout << endl;
    }
    return 0;
}