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
            if(i+1 == a[i]) ++cnt;
        }
        if(cnt%2 == 0) cout << cnt/2 << endl;
        else cout << cnt/2 + 1 << endl;
    }
    return 0;
}