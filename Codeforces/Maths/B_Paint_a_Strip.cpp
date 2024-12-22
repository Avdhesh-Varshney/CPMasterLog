#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        for(int ans = 1, i = 1; ; ++ans, i = 2*i + 2) {
            if(i >= n) {
                cout << ans << endl;
                break;
            }
        }
    }
    return 0;
}