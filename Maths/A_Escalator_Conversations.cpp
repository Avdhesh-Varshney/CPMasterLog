#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, m, k, H, ans = 0;
        cin >> n >> m >> k >> H;
        int h[n];
        for(int i = 0; i < n; i++) {
            cin >> h[i];
            h[i] = abs(h[i]-H);
            if(h[i] != 0 && h[i]%k == 0 && h[i]/k < m) ++ans;
        }
        cout << ans << endl;
    }
    return 0;
}