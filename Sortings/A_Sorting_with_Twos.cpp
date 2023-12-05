#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool solve() {
    int n;
    cin >> n;
    vector<ll> v1(n + 1);
    for(int i = 1; i <= n; i++) cin >> v1[i];
    for(int i = n; i >= 2; i--)
        if(v1[i - 1] > v1[i])
            if(((i - 1) & (i - 2)) != 0) return false;
    return true;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        if(solve()) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}