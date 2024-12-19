#include <bits/stdc++.h>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int N, M, k;
        cin >> N >> M >> k;
        int mx = INT_MAX;
        for(int i = 1; i <= N; ++i) {
            for(int j = 1; j <= M; ++j) {
                int peri = 2 * (i + j);
                if(abs(peri - k) < mx) mx = abs(peri - k);
            }
        }
        cout << mx << "\n";
    }
    return 0;
}