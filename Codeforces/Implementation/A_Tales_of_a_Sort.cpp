#include <iostream>
using namespace std;

int main() {
    int t, n, i = 0;
    cin >> t;
    while(t--) {
        cin >> n;
        int a[n], ans = 0;
        for(i = 0; i < n; i++) cin >> a[i];
        for(i = n-2; i >= 0; i--) {
            if(a[i] > a[i+1]) break;
        }
        for(int j = i; j >= 0; j--) ans = max(ans, a[j]);
        cout << ans << endl;
    }
    return 0;
}