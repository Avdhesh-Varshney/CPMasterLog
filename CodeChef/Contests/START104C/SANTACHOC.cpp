#include <bits/stdc++.h>
using namespace std;
bool solve(int& n, int& k, int& sum) {
    if(sum < n) return false;
    int rem = sum%n;
    if(k == 0 && rem != 0) return false;
    return true;
}
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n, k, sum = 0;
        cin >> n >> k;
        int a[n];
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }
        if(solve(n, k, sum)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}