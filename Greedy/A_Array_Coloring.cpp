#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, cnt = 0;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            if(a[i]%2 != 0) ++cnt;
        }
        if(cnt%2 == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}