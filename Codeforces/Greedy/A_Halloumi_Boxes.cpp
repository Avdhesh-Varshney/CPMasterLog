#include <bits/stdc++.h>
using namespace std;
bool solve() {
    int n, k;
    cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    if(is_sorted(a, a+n) || k > 1) return true;
    return false;
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        if(solve()) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}